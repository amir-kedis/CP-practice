#include <iostream>
#include <string>
#include <ctype.h>
#include <vector>

using namespace std;
int main()
{
  int magNum;
  cin >> magNum;

  int groupCount = 1;

  string prev;
  string cur;

  cin >> prev;

  for (int i = 0; i < magNum - 1; i++)
  {
    cin >> cur;

    if (prev != cur)
    {
      groupCount++;
    }

    prev = cur;
  }

  cout << groupCount;

  return 0;
}