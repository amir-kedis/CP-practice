#include <iostream>
#include <vector>

using namespace std;

void generatePackages(vector<int> &appleWeights, vector<int> &currentPackage, int currentIdx, int targetWeight)
{
  if (currentIdx == appleWeights.size())
  {
    // Base case: all apples are considered
    if (currentPackage.size() > 0)
    {
      // Output the current package
      cout << "(Total weight: " << targetWeight << " grams)" << endl;
      for (int weight : currentPackage)
      {
        cout << weight << " ";
      }
      cout << endl;
    }
    return;
  }

  // Try adding the current apple to the current package
  if (targetWeight + appleWeights[currentIdx] <= 20000)
  {
    currentPackage.push_back(appleWeights[currentIdx]);
    generatePackages(appleWeights, currentPackage, currentIdx + 1, targetWeight + appleWeights[currentIdx]);
    currentPackage.pop_back(); // Backtrack
  }

  // Start a new package with the current apple
  vector<int> newPackage = {appleWeights[currentIdx]};
  generatePackages(appleWeights, newPackage, currentIdx + 1, appleWeights[currentIdx]);
}

int main()
{
  int numApples;
  cin >> numApples;

  vector<int> appleWeights(numApples);
  for (int i = 0; i < numApples; ++i)
  {
    cin >> appleWeights[i];
  }

  vector<int> currentPackage;
  generatePackages(appleWeights, currentPackage, 0, 0);

  return 0;
}
