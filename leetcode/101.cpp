#include<iostream>


using namespace std;


  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
	bool compare(TreeNode* root1,TreeNode* root2)
	{
		if(root1->val != root2->val){
			return false;
		}
		if(root1 == NULL || root2 == NULL){
			return false;
		}
		if(root1 == NULL && root2 == NULL){
			return true;
		}
		return compare(root1->left , root2->right) && compare(root1->right , root2->left);
	}
class Solution {
public:

    bool isSymmetric(TreeNode* root) {
        bool b = compare(root,root);
        return b;
    }
};


int main()
{
	Solution s;
	TreeNode *root;
	root->val = 1;
	root->left->val = 2;
	root->left->left = NULL;
	root->left->right = NULL;
	root->right->val = 2;
	root->right->left = NULL;
	root->right->right = NULL;
	s.isSymmetric(root);
	return 0;
}
