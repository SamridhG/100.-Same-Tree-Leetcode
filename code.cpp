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
#include<vector>

class Solution {
public:
    vector<int>A,B;
    void preorder(TreeNode* p)
    {
      if(p==NULL)
      {
          A.push_back(NULL);
      }
        else
        {
            A.push_back(p->val);
            preorder(p->left);
            preorder(p->right);
        }
    }
     void preorderA(TreeNode* q)
    {
        if(q==NULL)
      {
          B.push_back(NULL);
      }
        else
        {
            B.push_back(q->val);
             preorderA(q->left);
            preorderA(q->right);
            
        }
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        preorder(p);
        preorderA(q);
        return A==B?true:false;
    }
};
