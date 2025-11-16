
class Solution {
public:

  
    int levels(TreeNode* root){
     if(root== NULL)return 0;
     int ans= 1 + max(levels(root->left), levels(root->right));
     return ans;


}
  void nthlevel(TreeNode* root, int currLevel , int level ,   vector<int> & v ){
    if(root == NULL) return;
    if(currLevel == level ){
         v.push_back(root->val);
       return;

    }
    nthlevel(root->left , currLevel+1 , level,v);    
    nthlevel(root->right, currLevel+1 , level,v);   


}

   void lorder(TreeNode* root, vector<vector<int>>  & ans){
      int n = levels(root);

      for(int i =1;i<=n;i++){
        vector<int> v;   // hr level ke liye ek vector jisme node ele store honge
        nthlevel(root , 1 ,i ,v);
        ans.push_back(v);
        

      }
   }

    vector<vector<int>> levelOrder(TreeNode* root) {
         vector<vector<int>> ans;
         lorder(root,ans);

         return ans;
    }
};