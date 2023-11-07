#include <bits/stdc++.h>

using namespace std;

template <typename T>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

// recursive;
void help(TreeNode<int> *root, vector<int> &ans)
{

    if (root != NULL)
    {

        ans.push_back(root->data);
        help(root->left, ans);
        help(root->right, ans);
    }
}

vector<int> preOrder(TreeNode<int> *root)
{
    vector<int> ans;

    // help(root, ans);

    // iterative

    if (root == NULL)
        return ans;

    stack<TreeNode<int> *> s;

    s.push(root);

    while (!s.empty())
    {
        root = s.top();
        s.pop();

        ans.push_back(root->data);

        if (root->right)
            s.push(root->right);
        if (root->left)
            s.push(root->left);
    }

    return ans;
}
