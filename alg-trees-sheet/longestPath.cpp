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

vector<TreeNode *> getLongestPath(TreeNode *root)
{
  if (!root)
    return vector<TreeNode *>();
  vector<TreeNode *> leftPath = getLongestPath(root->left);
  vector<TreeNode *> rightPath = getLongestPath(root->right);
  if (leftPath.size() >= rightPath.size())
  {
    leftPath.push_back(root);
    return leftPath;
  }
  rightPath.push_back(root);
  return rightPath;
}

int main()
{

  return 0;
}
