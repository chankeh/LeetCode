class Solution{
    public:
      int maxDepth(TreeNode *root){
	if(root==NULL)
            return 0;
	else if(root->left==NULL){
	      return maxDepth(root->right)+1;
	  }
	else if(root->right==NULL){
	     return maxDepth(root->left)+1;
 	 }
 	 else 
   	    return max(maxDepth(root->left),maxDepth(root->right))+1;
	}
}
