/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int start =1; 
        int end =n;
        while(start <= end){
            int mid = start +(end -start)/2;
            int result = guess(mid);// guess is givin only 1, -1, and 0 
            if(result==0) return mid;
            else if(result == -1) end = mid-1;
            else start = mid +1;
        }
        return -1;
    }
};
//aagar number bada hai pic se to end ko mid-1 karnege or agaar chota ha number to start ko mid +1 karenge 