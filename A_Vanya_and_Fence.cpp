#include <iostream>

using namespace std;

int main()
{
  int numOfPeople;
  cin >> numOfPeople;
  int fenceHight;
  cin >> fenceHight;

  int width = 0;

  for (size_t i = 0; i < numOfPeople; i++)
  {
    int hight;
    cin >> hight;
    if (hight > fenceHight)
    {
      width += 2;
    }
    else
    {
      width += 1;
    }
  }

  cout << width;
}