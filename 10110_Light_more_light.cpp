#include <cmath>
#include <iostream>
using namespace std;

int main()
{
  int x;
  cin >> x;
  while (x != 0)
  {
    unsigned int sq = sqrt(x);
    cout << (sq * sq == x ? "yes\n" : "no\n");
    cin >> x;
  }
  return 0;
}
