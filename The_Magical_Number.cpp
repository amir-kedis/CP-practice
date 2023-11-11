#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void MN(int N, int RSum, int P, int &max)
{
  if (RSum == 0)
  {
    max = std::max(max, P);
    return;
  }
  for (int i = 1; i < N; i++)
    if (i <= RSum)
      MN(N, RSum - i, P * i, max);
}

int main()
{
  int n;
  cin >> n;
  int max = INT16_MIN;
  MN(n,n,1,max);
  cout << max;
  return 0;
}
