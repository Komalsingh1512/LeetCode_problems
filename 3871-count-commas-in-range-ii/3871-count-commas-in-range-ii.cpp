class Solution {
public:
    long long countCommas(long long n) {
        if(n<=999) return 0;
        long long count =0;
        long long start = 1000;
        while(start<=n){
            //if n =1000000
            count+= n-start +1; //1,000,000-1,000+1=999001 // 1,000,000-1,000,000 +1=1+999001=999002
            start *=1000;//1000000
        }
       return count;
    }
};