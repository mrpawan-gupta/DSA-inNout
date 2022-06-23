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
};
TreeNode* createNode(int data){
    TreeNode * root = new TreeNode();
    if(!root){
        cout << "Error In Creating Node" << endl;
    }
    root->data = data;
    root->left = NULL;
    root->right = NULL;
    return root;
}
void preOrder(TreeNode *root){
    if(root == NULL){
        cout << "NULL --> " ;
        return;
    }
    cout << root->data << " --> ";
    preOrder(root->left);
    preOrder(root->right);
}
int main(int argc, char const *argv[]){

    // creating the Root Node of the tree
    TreeNode* Node = createNode(10);
    Node->left = createNode(20);
    Node->right = createNode(30);
    Node->left->left = createNode(40);
    Node->left->right = createNode(50);
    Node->right->left = createNode(60);
    Node->right->right = createNode(70);
    /* following is the tree after above statement
 
             10     <---- root node
            / \
          20   30
         / \    / \
        40  50  60 70   <------ leaf node
      /  \  / \ / \ / \
    Null Null  Null NUll 
    */

    preOrder(Node);
   


    return 0;
}