#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void EA(vector<int>& arr, int i, int sum1, int sum2, bool &possible)
{
  if (i == arr.size())
  {
    if (sum1 == sum2)
      possible = true;
    return;
  }
  EA(arr, i + 1, sum1 + arr[i], sum2, possible);
  EA(arr, i + 1, sum1, sum2 + arr[i], possible);
}

int main()
{
  int n, x;
  vector<int> arr;
  bool poss = false;

  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> x;
    arr.push_back(x);
  }

  EA(arr, 0, 0, 0, poss);
  cout << poss;

  return 0;
}
