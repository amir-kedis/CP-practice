#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
  int n;
  cin >> n;

  vector<int> cols;

  for (size_t i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    cols.push_back(x);
  }

  for (size_t i = 0; i < n - 1; i++)
  {
    for (size_t j = 0; j < n - 1; j++)
    {
      if (cols[j] > cols[j + 1])
      {
        int temp = cols[j];
        cols[j] = cols[j + 1];
        cols[j + 1] = temp;
      }
    }
  }

  for (size_t i = 0; i < n; i++)
  {
    cout << cols[i] << " ";
  }

  return 0;
}