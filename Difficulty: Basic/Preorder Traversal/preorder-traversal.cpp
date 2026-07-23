/*
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

void preorder(Node *root,vector<int> &ans){
    if(!root) return;
    ans.push_back(root->data);
    preorder(root->left,ans);
    preorder(root->right,ans);
} 
class Solution {
  public:
    vector<int> preOrder(Node* root) {
        // code here
        vector<int> ans;
        preorder(root,ans);
        return ans;
    }
};