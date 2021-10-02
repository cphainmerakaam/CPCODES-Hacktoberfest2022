/*
Problem Link: https://leetcode.com/problems/binary-tree-maximum-path-sum/

*/


class Solution {
public:
// recurssive function
    int solve(TreeNode* root, int &res){
        if(root==NULL){
            return 0;
        }
        // store res obtained from left and right subtrees
        int lft=solve(root->left, res);
        int rgt=solve(root->right, res);
        
        int curr=root->val;
        
        // we pass temp in the recursive function
        int temp=max(curr,curr+max(lft,rgt));
        
        int ans=max(temp,curr+lft+rgt);
         
        // res stores the max ans till now.
        res=max(res,ans);
        
        return temp;
    }
    
    // main function
    int maxPathSum(TreeNode* root) {
        int res=INT_MIN;
        solve(root,res);
        return res;
    }
};