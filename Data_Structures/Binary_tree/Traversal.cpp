#include <bits/stdc++.h>

using namespace std;

class TreeNode
{

public:
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

//pre order
void help(TreeNode* root, vector<int> &ans){

    if(root!= NULL){

        ans.push_back(root->data);
        help(root->left, ans);
        help(root->right, ans);
    }
}

vector<int> preOrder(TreeNode * root){
    vector<int> ans;

    help(root, ans);

    return ans;

}

// inorder

void help(TreeNode* root, vector<int> &ans){

    if(root!= NULL){

        help(root->left, ans);

        ans.push_back(root->data);

        help(root->right, ans);
    }
}
vector<int> getInOrderTraversal(TreeNode *root)
{
    vector<int> ans;

    help(root, ans);

    return ans;
}

//post order
void help_post(TreeNode* root, vector<int> &ans){

    if(root!= NULL){

        help_post(root->left, ans);

        help_post(root->right, ans);

        ans.push_back(root->data);
    }
}

vector<int> postorderTraversal(TreeNode *root)
{
    vector<int> ans;

    help_post(root, ans);

    return ans;
}


