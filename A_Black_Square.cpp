#include <iostream>
#include <string>
#include <ctype.h>
#include <vector>

using namespace std;
int main()
{
  int arr[4];
  for (int i = 0; i < 4; i++)
  {
    cin >> arr[i];
  }

  string gameProcess;
  cin >> gameProcess;

  int sum = 0;

  for (int i = 0; i < gameProcess.length(); i++)
  {
    int index = gameProcess[i] - 49;
    sum += arr[index];
  }
  cout << sum;

  return 0;
}