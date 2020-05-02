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
    bool dfs(TreeNode* root, vector<int>& arr,int idx = 0){
        if (!root || root->val != arr[idx])
            return false;
        if (idx + 1 == (int)arr.size())
            return !root->left && !root->right;
        return dfs(root->left, arr, idx + 1) || dfs(root->right,arr,idx + 1);
    }
    bool isValidSequence(TreeNode* root, vector<int>& arr) {
        return dfs(root,arr);
    }
};
