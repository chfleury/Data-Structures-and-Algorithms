
#include <iostream>

using namespace std;

// max positive sum in subarray
void solve(int a[], int n)
{
  int ans, sum = a[0];

  for (int i = 1; i < n; i++)
  {
    sum += a[i];
    if (sum > ans)
      ans = sum;

    if (sum < 0)
      sum = 0;
  }

  cout << ans << endl;
}

int main()
{
  int a[] = {-1, -2, 5, 7, -3, 10, -30, 20};

  solve(a, 8);
  return 0;
}
