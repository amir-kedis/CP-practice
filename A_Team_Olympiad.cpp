#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
#include <cmath>
#include <set>
#include <vector>

using namespace std;
int gcd(int a, int b){int result = min(a, b); while (result > 0){if (a % result == 0 && b % result == 0){break;}result--;}return result;}
int main()
{
  

  int n;
  cin >> n;

  vector<int> students[4];


  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;

    students[x].push_back(i + 1);
  }

  int ans = min(students[1].size(), min(students[2].size(), students[3].size()));

  cout << ans << endl;

  for (int i = 0; i < ans; i++)
  {
    cout << students[1][i] << " " << students[2][i] << " " << students[3][i] << endl;
  }

  return 0;
}