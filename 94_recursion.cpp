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
        void Traverse (TreeNode* root,vector<int>&arr){
            if ((root) ==nullptr){
                return;
            }
            if(root->left){
                Traverse(root->left,arr);
            }
            arr.push_back(root->val);
            if (root->right){
                Traverse(root->right,arr);
            }
        }
        vector<int> inorderTraversal(TreeNode* root) {
            vector<int> arr ;
            Traverse(root, arr);
            return arr;
        }
    };