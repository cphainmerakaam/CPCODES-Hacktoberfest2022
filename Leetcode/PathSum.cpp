//https://leetcode.com/problems/path-sum/
bool hasPathSum(TreeNode* root, int sum) {
    if(root == NULL)  return false;
    if(root->right == root->left)  return sum == root->val;
    return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val) ;
}
