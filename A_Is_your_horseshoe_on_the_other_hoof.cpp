#include <iostream>
#include <string>
#include <ctype.h>
#include <set>
#include <vector>

using namespace std;
int main()
{
  set<int> uniqueColors;

  int color = 0;
  for (int i = 0; i < 4; i++)
  {
    cin >> color;
    uniqueColors.insert(color);
  }

  cout << 4 - uniqueColors.size();

  return 0;
}