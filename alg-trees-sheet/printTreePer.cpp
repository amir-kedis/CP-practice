#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
#include <cmath>
#include <climits>
#include <set>
#include <vector>
#include <queue>

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

int gcd(int a, int b)
{
  int result = min(a, b);
  while (result > 0)
  {
    if (a % result == 0 && b % result == 0)
    {
      break;
    }
    result--;
  }
  return result;
}

std::set<TreeNode *> getPer(TreeNode *root)
{
  std::set<TreeNode *> per;
  per.insert(root);

  TreeNode *cur = root->left;
  while (cur)
  {
    per.insert(cur);
    cur = cur->left;
  }

  cur = root->right;
  while (cur)
  {
    per.insert(cur);
    cur = cur->right;
  }
}

void getLeafs(TreeNode *root, std::set<TreeNode *> &leafs)
{
  if (!root)
    return;
  if (!root->left && !root->right)
    leafs.insert(root);
  getLeafs(root->left, leafs);
  getLeafs(root->right, leafs);
}

int main()
{
  TreeNode *root;
  std::set<TreeNode *> per;
  getLeafs(root, per);
  std::set edges = getPer(root);
  per.merge(edges);

  for (auto pr : per)
  {
    cout << pr << " ";
  }

  return 0;
}
