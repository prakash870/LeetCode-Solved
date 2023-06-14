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
   TreeNode *prev=NULL;
   void minimum(TreeNode *root,int &min1){
       
       if(root->left)
       minimum(root->left,min1);

        if(prev!=NULL)
        min1=min(min1,abs(root->val-prev->val));

        prev=root;
        if(root->right)
        minimum(root->right,min1);

       
   }
    int getMinimumDifference(TreeNode* root) {
        int min=INT_MAX;
        minimum(root,min);
        return min;
    }
};