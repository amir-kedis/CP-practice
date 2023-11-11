#include <iostream>
#include <string>
#include <ctype.h>
#include <vector>

using namespace std;
int main()
{
  string name;
  cin >> name;

  int numOfMoves = 0;
  char cur = 'a';

  for (size_t i = 0; i < name.length(); i++)
  {
    int rawMOves = min(abs(cur - name[i]), 26 - abs(cur - name[i]));
    cur = name[i];
    numOfMoves += rawMOves;
  }

  cout << numOfMoves;
  return 0;
}