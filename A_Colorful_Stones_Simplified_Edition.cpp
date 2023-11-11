#include <iostream>
#include <string>
#include <ctype.h>
#include <set>
#include <vector>

using namespace std;
int main()
{
  string stones, moves;

  cin >> stones >> moves;

int index = 0;
for (int i = 0; i < moves.length(); i++)
{
  if (moves[i] == stones[index])
  {
    index++;
  }
  
}
cout << index + 1;

  return 0;
}