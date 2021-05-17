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

    void helper(TreeNode *root, TreeNode*& lastVisited) {
        if (root == NULL)
            return;
        //preorder, the root->right will be overrided when calling helper(root->left, lastVisited)
        //need to be saved
        TreeNode* right = root->right;
            
        if (lastVisited != NULL)
        {
            lastVisited->left = NULL;
            lastVisited->right = root;
        }
        //remember last visited
        lastVisited = root;
        
        helper(root->left, lastVisited);
        helper(right, lastVisited);
    }

    void flatten(TreeNode *root) {
        TreeNode* lastVisited = NULL;
        helper(root, lastVisited);
    }
};
