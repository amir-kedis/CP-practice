#include <iostream>
#include <string>
#include <ctype.h>
#include <vector>

using namespace std;
int main()
{
  int k;
  int r;
  int x = 0;
  cin >> k >> r;
  while ((k * x) % 10 != r)
  {
    x += 1;
    if ((k * x) % 10 == 0)
    {
      break;
    }
  }
  cout << x;
  return 0;
}