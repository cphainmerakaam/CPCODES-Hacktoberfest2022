class Solution {
public:
    int mySqrt(int x) {
       long long int l = 1;
       long long int r = x;
        if(x==0) return 0;
        if(x==1) return 1;
       while(l*l<=r) l++;
        return l-1;
    }
};

// https://leetcode.com/problems/sqrtx/
