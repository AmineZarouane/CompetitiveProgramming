/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans = -1e9;
    int get(TreeNode* root){
        if (!root)
            return 0;
        int left = max(get(root->left),0);
        int right= max(get(root->right),0);
        ans = max(left + right + root->val, ans);
        return max(left,right)+root->val;
    }
    int maxPathSum(TreeNode* root) {
        get(root);
        return ans;
    }
};