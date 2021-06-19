
#include <iostream>

using namespace std;

int s[1000];

void buildPartialSums(int a[], int n)
{
  s[0] = a[0];
  for (int i = 1; i < n; i++)
  {
    s[i] = s[i - 1] + a[i];
  }
}

long long query(int l, int r)
{
  return s[r] - s[l - 1];
}

int main()
{
  int a[] = {1, 2, 3, 4, 5, 6, 7};
  buildPartialSums(a, 7);

  cout << query(2, 5) << endl;

  return 0;
}
