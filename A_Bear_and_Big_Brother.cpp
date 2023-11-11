#include <iostream>

using namespace std;

int main()
{
  int LA, BA;
  cin >> LA;
  cin >> BA;

  int year = 0;

  while (LA <= BA)
  {
    LA *= 3;
    BA *= 2;
    year++;
  }

  cout << year;
}