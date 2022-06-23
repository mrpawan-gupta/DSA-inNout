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
static int minValue = INT_MAX;
static int maxValue = INT_MIN;
void getvalues(TreeNode *root){
    
    if(root == NULL){
        return;
    }

    minValue = std::min(minValue,root->data);
    maxValue = std::max(maxValue,root->data);
    getvalues(root->left);
    getvalues(root->right);
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
   
   getvalues(Node);
   cout << "Min value in tree is --> " << minValue << endl;
   cout << "Max value in tree is --> " << maxValue << endl;


    return 0;
}