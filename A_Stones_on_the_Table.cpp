#include <iostream>
#include <string>
#include <ctype.h>
#include <vector>

using namespace std;
int main()
{
  int size;
  cin >> size;

  char prev;
  cin >> prev;
  char cur;

  int changes = 0;
  for (int i = 0; i < size - 1; i++)
  {
    cin >> cur;
    if (cur == prev)
    {
      changes++;
    }
    prev = cur;
  }

  cout << changes;

  return 0;
}