#include <iostream>
#include <string>
#include <ctype.h>
#include <vector>

using namespace std;
int main()
{
  int actions;
  cin >> actions;

  int freeOff = 0;
  int crimesMade = 0;

  int action;
  for (int i = 0; i < actions; i++)
  {
    cin >> action;
    if (action >= 0)
    {
      freeOff += action;
    }
    else {
      if (freeOff > 0)
      {
        freeOff -= 1;
      }
      else {
        crimesMade++;
      }
    }
  }

  cout << crimesMade;
  

  return 0;
}