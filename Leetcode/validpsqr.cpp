class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 0) return true;
        long long int l = 1;
        while(l*l<=num)
        {
            if((l*l)/num==1) return true;
            l++;
        }
        return false;
    }
};

// https://leetcode.com/problems/valid-perfect-square/
