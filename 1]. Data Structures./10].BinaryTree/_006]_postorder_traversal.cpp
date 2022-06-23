/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
        int data;
        TreeNode* left;
        TreeNode* right;

        TreeNode(int value){
            data = value; // value id being Initialized to the Node.
            left = NULL;
            right = NULL;
            // left & right child are intialized with Null value.
        }
};
void preorder(TreeNode *root , vector<int> &ans){
    if(root == NULL){
        return;
    }
    //ans.push_back(root->data);
    preorder(root->left, ans);
    preorder(root->right, ans);
    ans.push_back(root->data);
}

vector<int> preorderTraversal(TreeNode *root){
    vector<int> ans;
    preorder(root,ans);
    return ans;
}

int main(int argc, char const *argv[]){

    // creating the Root Node of the tree
    TreeNode* Node = new TreeNode(10);
    Node->left = new TreeNode(20);
    Node->right = new TreeNode(30);
    Node->left->left = new TreeNode(40);
    Node->left->right = new TreeNode(50);
    Node->right->left = new TreeNode(60);
    Node->right->right = new TreeNode(70);
    Node->right->right->left = new TreeNode(80);
    Node->left->left->left = new TreeNode(90);

    /* following is the tree after above statement
 
             10
            / \
          20   30
         / \    / \
        40  50  60 70        
       /          /
      90        80
    */
   vector<int> Tree = preorderTraversal(Node);
   for(auto &i : Tree){
    cout << i << " ";
   }



    return 0;
}