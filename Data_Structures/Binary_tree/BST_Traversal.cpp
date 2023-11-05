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

void solve(TreeNode *root, vector<vector<int>> &ans)
{

    if (root == NULL)
        return;

    // preorder
    ans[1].push_back(root->data);
    solve(root->left, ans);

    // inorder
    ans[0].push_back(root->data);

    // postorder
    solve(root->right, ans);
    ans[2].push_back(root->data);

    return;
}

vector<vector<int>> getTreeTraversal(TreeNode *root)
{
    vector<vector<int>> ans = {{}, {}, {}};

    solve(root, ans);

    return ans;
}

int main()
{

    return 0;
}