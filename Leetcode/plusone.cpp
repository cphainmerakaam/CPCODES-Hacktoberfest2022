class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
         reverse(digits.begin(), digits.end());
        int n=digits.size();
        vector<int> ans;
       
        int k=digits[0]+1;
        
        int carr=(k>=10)?1:0;
        int l=k%10, i=1;
        ans.push_back(l);
        while(i<n)
        {
            int a=(digits[i]+carr);
            carr=(a>=10)?1:0;
            ans.push_back(a%10);
            i++;
        }
       
        if(carr!=0)
        {
            ans.push_back(1);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

// https://leetcode.com/problems/plus-one/
