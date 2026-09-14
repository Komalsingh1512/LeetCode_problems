class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        //left and right are x1 and x2
        int left = max(rec1[0], rec2[0]);
        int right= min(rec1[2], rec2[2]);
        //top and bottom are y1 and y2
        int top = max(rec1[1], rec2[1]);
        int bottom= min(rec1[3], rec2[3]);
        return left <right && top< bottom;// this will give true when return condition become true 
    }
};