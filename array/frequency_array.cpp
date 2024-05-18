#include <iostream>

using namespace std;
int frequencyArray[1000];

// counting how many distinct numbers in an array using a frequency array

int main()
{
  int a[] = {4, 2, 1, 7, 8, 8, 4, 2}; // 8 elements, 5 distinct
  int ans = 0;

  for (int i = 0; i < 8; i++)
  {
    if (frequencyArray[a[i]] == 0)
    {
      ans += 1;
    }
    frequencyArray[a[i]] += 1;
  }

  // prints 5
  cout << ans << endl;
  return 0;
}
