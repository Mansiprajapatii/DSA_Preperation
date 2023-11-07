#include <bits/stdc++.h>

using namespace std;

class TreeNode
{
public:
    int data;
    TreeNode *left, *right;
    TreeNode() : data(0), left(NULL), right(NULL) {}
    TreeNode(int x) : data(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
};

// recursion
void help(TreeNode *root, vector<int> &ans)
{

    if (root != NULL)
    {

        help(root->left, ans);

        help(root->right, ans);

        ans.push_back(root->data);
    }
}

vector<int> postorderTraversal(TreeNode *root)
{
    vector<int> ans;

    // help(root, ans);

    // using two stack
    stack<TreeNode *> s1;
    stack<TreeNode *> s2;

    if (root == NULL)
        return ans;

    s1.push(root);

    while (!s1.empty())
    {

        root = s1.top();
        s1.pop();

        s2.push(root);

        if (root->left)
            s1.push(root->left);
        if (root->right)
            s1.push(root->right);
    }

    while (!s2.empty())
    {

        ans.push_back(s2.top()->data);

        s2.pop();
    }

    return ans;
}