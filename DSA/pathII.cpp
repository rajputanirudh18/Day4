class Solution {
public:
   
   
     void pathSumHelper(TreeNode* root,int targetSum,vector<int> v1,vector<vector<int>>& v){
         if(root==NULL){
        
             return;
         }
         if(root->left==NULL and root->right==NULL)
         {
             if(targetSum-root->val==0){
                 v1.push_back(root->val);
                 v.push_back(v1);
             }
             return;
         }
         v1.push_back(root->val);
         pathSumHelper(root->left,targetSum-root->val,v1,v);
         pathSumHelper(root->right,targetSum-root->val,v1,v);
         v1.pop_back();
        
            
         
         
             
     }
    
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
         vector<vector<int>> v;
        vector<int> v1;
         pathSumHelper(root,targetSum,v1,v);
        return v;
    }
};