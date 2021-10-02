// problem link ->   https://leetcode.com/problems/distinct-subsequences/

//problem statement : Given two strings s and t, return the number of distinct subsequences of s which equals t.
//
//                    A string's subsequence is a new string formed from the original string by deleting some (can be none) of the characters without disturbing the remaining characters' relative positions. (i.e., "ACE" is a subsequence of "ABCDE" while "AEC" is not).
//
//					  It is guaranteed the answer fits on a 32-bit signed integer.


//	Input: s = "rabbbit", t = "rabbit"
//	Output: 3

//	Explanation:
//		As shown below, there are 3 ways you can generate "rabbit" from S.
//		rabbbit
//		rabbbit
//		rabbbit
class Solution {
public:
    int numDistinct(string s, string t) {
        int n=s.size(),m=t.size();
//        using dp for this problem, taking 2d array(dp[][])
        unsigned long long int dp[n+1][m+1];
        
//      usecase considering only string s 
        for(int i=0;i<n;i++){
            dp[i][0]=1;
        }
        
//      usecase considering only string t 
        for(int j = 1; j < m+1; j++)
            dp[0][j] = 0;
        
//        one by one both strings are taken and checking for distinct subsequences
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i-1]==t[j-1]){
                    dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
//        stored total numbers of distinct subsequences
        return dp[n][m];
    }
};
