#include <iostream>

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
	public:
		bool isSameTree(TreeNode* p, TreeNode* q) {
			if(p ==NUll && q == NULL)
				return true;
			if(!q || !p)
				return false;
			if(p->val == q->val){
				return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);

			} else {
				return false;
			}
		}
}
