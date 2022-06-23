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

int getDepth(TreeNode *root){
    
    if(root == NULL){
        return 0;
    }
    int left = 1 + getDepth(root->left);
    int right = 1 + getDepth(root->right);
    int ans = max(left,right);

    return ans;
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
   
    cout << "Depth of the tree is " << getDepth(Node);

    return 0;
}