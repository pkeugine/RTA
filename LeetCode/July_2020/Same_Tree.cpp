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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool f_left = false;
        bool f_right = false;
        if(p==nullptr && q==nullptr) return true;
        if(p!=nullptr && q!=nullptr && p->val == q->val) {
            if(p->left!=nullptr && q->left!=nullptr) {
                if(!isSameTree(p->left, q->left)) return false;
                else f_left = true;
            }
            if(p->right!=nullptr && q->right!=nullptr) {
                if(!isSameTree(p->right, q->right)) return false;
                else f_right = true;
            }
            if(p->right==nullptr && q->right==nullptr) f_right = true;
            if(p->left==nullptr && q->left==nullptr) f_left = true;
            if(f_left && f_right) return true;
        }
        return false;
    }
};
