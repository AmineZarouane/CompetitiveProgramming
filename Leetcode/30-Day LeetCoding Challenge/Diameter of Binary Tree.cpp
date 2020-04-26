/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int ans = 1;
    int dfs(TreeNode *u){
        if (u == NULL)
            return 0;
        int l = dfs(u->left);
        int r = dfs(u->right);
        ans = max(ans, l + r + 1);
        return 1 + max(l,r);
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return ans-1;
    }
};