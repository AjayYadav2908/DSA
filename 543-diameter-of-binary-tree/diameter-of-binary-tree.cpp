class Solution {
public:
 int maxdia = 0; // global varaiable
    int levels(TreeNode* root){
     if(root== NULL)return 0;
     int ans= 1 + max(levels(root->left), levels(root->right));
     return ans;

    }


    int diameterOfBinaryTree(TreeNode* root) {
        if(root== NULL)return 0;
        int dia = levels(root->left) + levels(root->right);
        maxdia = max(maxdia,dia);

        diameterOfBinaryTree(root->left);  
        diameterOfBinaryTree(root->right);   // this is to check for evry node 
        return maxdia;


    }
};