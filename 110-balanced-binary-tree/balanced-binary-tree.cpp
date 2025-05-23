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
    bool isBalanced(TreeNode* root) {
        return verify(root)!=-1;
    }
    int verify(TreeNode* root){
        if(root == NULL) return 0;
        int lefts = verify(root -> left);
        if(lefts == -1) return -1;
        int rights= verify(root -> right);
        if(rights == -1) return -1;
        if(abs(lefts-rights)>1) return -1;

        return max(lefts , rights) +1;
    }
};