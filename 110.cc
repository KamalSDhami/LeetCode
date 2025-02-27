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
        int helper (TreeNode* root,int &diff){
            if(!root) return 0;
            int left = helper(root->left,diff);
            int right = helper (root->right,diff);
            diff= max(diff,abs(left-right));
            return max(left,right)+1;
        }
        bool isBalanced(TreeNode* root) {
            int diff=0;
            helper(root,diff);
            return diff<2;
        }
    };