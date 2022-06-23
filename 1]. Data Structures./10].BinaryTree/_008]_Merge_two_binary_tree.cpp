/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;


/* Definition for a binary tree node. */
struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
};

struct TreeNode *newNode(int data){
    struct TreeNode* root = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    root->data = data;
    root->left = NULL;
    root->right = NULL;
    return (root);
}

class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1 == NULL && root2 == NULL) return NULL;   
        if(!root1) return root2;
        if(!root2) return root1;
        root1->data+=root2->data;
        root1->left = mergeTrees(root1->left,root2->left);
        root1->right = mergeTrees(root1->right,root2->right);
        return root1;
    }
    void preorder(TreeNode *root){
        if(root == NULL){
            return;
        }
        cout << (root->data) << " ---> ";
        preorder(root->left);
        preorder(root->right);
    }
};
int main(int argc, char const *argv[]){
     struct TreeNode *root = newNode(10);
     root->left = newNode(20);
     root->right = newNode(30);
     root->left->left = newNode(40);
     root->left->right = newNode(50);
     root->right->left = newNode(60);
     root->right->right = newNode(70);
     /* following is the tree after above statement
 
             10
            / \
          20   30
         / \    / \
        40  50  60 70
    */

   struct TreeNode *root2 = newNode(1);
    root2->left = newNode(2);
    root2->right = newNode(3);
    root2->left->left = newNode(4);
    root2->left->right = newNode(5);
    root2->right->left = newNode(6);
    root2->right->right = newNode(7);
    /* following is the tree after above statement
 
              1
            /  \
          2     3
         / \   / \
        4   5 6   7
    */

    Solution ob;
    ob.preorder(root);
    cout << '\n';
    ob.mergeTrees(root,root2); // merging two binary trees
    ob.preorder(root);

    return 0;
}

