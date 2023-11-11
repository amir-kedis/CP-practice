#include <iostream>

using namespace std;

int main()
{
  int prob = 0;

  int N;
  cin >> N;

  for (int i = 0; i < N; i++)
  {
    int count = 0;
    for (int p = 0; p < 3; p++)
    {
      int Ans;
      cin >> Ans;
      if (Ans == 1)
      {
        count++;
      }
    }
    if (count >= 2)
    {
      prob++;
    }
  }
  cout << prob;
}