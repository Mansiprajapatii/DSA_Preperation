#include <bits/stdc++.h>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<int> ans;

    // recursive
    void help(TreeNode *root)
    {

        if (root != NULL)
        {

            help(root->left);

            ans.push_back(root->val);

            help(root->right);
        }
    }
    vector<int> inorderTraversal(TreeNode *root)
    {
        // help(root);

        // iterative

        stack<TreeNode *> s;

        TreeNode *temp = root;

        while (true)
        {

            if (temp != NULL)
            {
                s.push(temp);
                temp = temp->left;
            }

            else
            {

                if (s.empty() == true)
                {
                    break;
                }

                temp = s.top();
                s.pop();

                ans.push_back(temp->val);

                temp = temp->right;
            }
        }

        return ans;
    }
};