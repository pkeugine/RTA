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
private:
    map<int, int> idx_map;
    int idx_post;
    TreeNode* helper(int in_left, int in_right, vector<int>& inorder, vector<int>& postorder) {
        if(in_left>in_right) return NULL;
        int val_root = postorder[idx_post];
        TreeNode* root = new TreeNode(val_root);
        --idx_post;
        
        int idx_root = idx_map[val_root];
        
        root->right = helper(idx_root+1, in_right, inorder, postorder);
        root->left = helper(in_left, idx_root-1, inorder, postorder);
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int sz = postorder.size();
        idx_post = sz -1;
        int idx = 0;
        for(int val : inorder) idx_map[val] = idx++;
        
        return helper(0, sz-1, inorder, postorder);
    }
};
