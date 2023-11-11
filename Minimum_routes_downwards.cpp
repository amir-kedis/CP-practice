#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void MR(vector<vector<int>> &mat,
        vector<vector<bool>> &visited,
        int i, int j,
        int n,
        int curC, int &minC)
{
  visited[i][j] = true;
  curC += mat[i][j];

  if (i == n - 1)
  {
    minC = std::min(minC, curC);
    visited[i][j] = false;
    return;
  }

/*   if (curC >= minC)
    return; */

  if (i + 1 < n && !visited[i + 1][j])
    MR(mat, visited, i + 1, j, n, curC, minC);

  if (i + 1 < n && j + 1 < n && !visited[i + 1][j + 1])
    MR(mat, visited, i + 1, j + 1, n, curC, minC);

  if (i + 1 < n && j - 1 >= 0 && !visited[i + 1][j - 1])
    MR(mat, visited, i + 1, j - 1, n, curC, minC);

  visited[i][j] = false;
}

void unvisitAll(vector<vector<bool>> &visited)
{
  int n = visited.size();
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
    {
      visited[i][j] = false;
    }
}

int main()
{
  int n, x;
  cin >> n;
  vector<vector<bool>> visited(n, vector<bool>(n, false));
  vector<vector<int>> mat(n, vector<int>(n));
  vector<int> minVals(n);

  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
    {
      cin >> x;
      mat[i][j] = x;
    }

  for (int j = 0; j < n; j++)
  {
    int minC = INT32_MAX;
    MR(mat, visited, 0, j, n, 0, minC);
    unvisitAll(visited);
    minVals[j] = minC;
  }

  cout << *std::min_element(minVals.begin(), minVals.end());

#if 0
  cout << endl;
  for (auto el : minVals)
    cout << el << " ";
#endif

  return 0;
}
