class Solution {
public:
    // Function to find the median of two sorted arrays
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) {
            // Swap the arrays by calling the function again
            // so that nums1 becomes the smaller array
            return findMedianSortedArrays(nums2, nums1);
        }
        int len1 = nums1.size();
        int len2 = nums2.size();
        int left = 0;
        int right = len1;
        // Continue binary search while the search range is valid
        while (left <= right) {
            // Find the middle position where we will divide nums1
            int part1 = (left + right) / 2;
            // Calculate where we need to divide nums2
            // so that the left side contains half of all elements
            int part2 = (len1 + len2 + 1) / 2 - part1;
            // Find the largest element on the LEFT side of nums1
            // If part1 == 0, there is nothing on the left,
            // so use INT_MIN as a virtual value
            int maxLeft1 = (part1 == 0) ? INT_MIN : nums1[part1 - 1];
            // Find the smallest element on the RIGHT side of nums1
            // If part1 == len1, there is nothing on the right,
            // so use INT_MAX as a virtual value
            int minRight1 = (part1 == len1) ? INT_MAX : nums1[part1];
            // Find the largest element on the LEFT side of nums2
            // If part2 == 0, there is nothing on the left,
            // so use INT_MIN
            int maxLeft2 = (part2 == 0) ? INT_MIN : nums2[part2 - 1];
            // Find the smallest element on the RIGHT side of nums2
            // If part2 == len2, there is nothing on the right,
            // so use INT_MAX
            int minRight2 = (part2 == len2) ? INT_MAX : nums2[part2];
            // Check whether the partition is correct
            // The biggest element on the left of nums1
            // must be <= the smallest element on the right of nums2
            // AND
            // The biggest element on the left of nums2
            // must be <= the smallest element on the right of nums1
            if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
                // If total number of elements is even
                if ((len1 + len2) % 2 == 0) {
                    // Median is the average of:
                    // largest element on the LEFT
                    // and smallest element on the RIGHT
                    return (max(maxLeft1, maxLeft2)
                            + min(minRight1, minRight2)) / 2.0;
                }
                // If total number of elements is odd
                else {
                    // Median is the largest element on the LEFT
                    return max(maxLeft1, maxLeft2);
                }
            }
            // If left side of nums1 is too large
            // we need to move the partition of nums1 to the LEFT
            else if (maxLeft1 > minRight2) {
                // Move binary search boundary to the left
                right = part1 - 1;
            }
            // Otherwise, the partition of nums1 is too far LEFT
            // so we need to move it to the RIGHT
            else {
                // Move binary search boundary to the right
                left = part1 + 1;
            }
        }
        // This line should theoretically never execute
        // if the input arrays are valid sorted arrays
        return 0.0;
    }
};