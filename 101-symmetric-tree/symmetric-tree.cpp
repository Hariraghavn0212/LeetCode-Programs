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
    bool isSym(TreeNode* a , TreeNode * b) {
        if(a==NULL&&b==NULL) return true;
        if(a==NULL || b==NULL) return false;
         if(a->val != b->val) return false;
         return isSym(a->left ,b-> right)&& isSym(a->right , b-> left);
    }
    bool isSymmetric(TreeNode* root){
        return isSym(root , root);
    }
};