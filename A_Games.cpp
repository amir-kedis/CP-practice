#include <iostream>
#include <string>
#include <ctype.h>
#include <vector>

using namespace std;
int main()
{
  int teams;
  cin >> teams;

  vector<int> homeColors;
  vector<int> guestColors;

  for (size_t i = 0; i < teams; i++)
  {
    int homeColor;
    int guestColor;

    cin >> homeColor;
    cin >> guestColor;

    homeColors.push_back(homeColor);
    guestColors.push_back(guestColor);
  }

  int counter = 0;
  for (int i = 0; i < homeColors.size(); i++)
  {
    for (int j = 0; j < guestColors.size(); j++)
    {
      if (homeColors[i] == guestColors[j])
      {
        counter++;
      }
    }
  }

  cout << counter;

  return 0;
}