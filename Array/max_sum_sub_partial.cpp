
#include <iostream>

using namespace std;

// max positive sum in subarray
void solve(int a[], int n)
{
  int s[8] = {a[0]};
  int ans = -100000;

  // initializing partial sums array
  for (int i = 1; i < n; i++)
    s[i] += s[i - 1] + a[i];

  int min = s[0];

  for (int i = 1; i < n; i++)
  {
    if (s[i] - min > ans)
      ans = s[i] - min;

    if (min > s[i])
    {
      min = s[i];
    }
  }
  cout << ans << endl;
}

int main()
{
  int a[] = {-1, -2, 5, 7, -3, 10, -30, 17};

  solve(a, 8);
  return 0;
}
