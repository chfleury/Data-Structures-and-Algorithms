
#include <iostream>

using namespace std;

int s[1000] = {};
int a[] = {1, 2, 3, 4, 5, 6, 7};

// range update trick using partial sums
void updateRange(int n)
{
  for (int i = 0; i < n; i++)
  {
    s[i] = s[i - 1] + s[i];
    a[i] += s[i];
  }
}

void query(int l, int r, int n)
{
  s[l] += n;
  s[r + 1] += -n;
}

int main()
{

  query(0, 6, 10);
  query(0, 6, 10);
  query(0, 6, 10);
  query(0, 6, 10);
  query(0, 6, 10);
  query(1, 6, -100);

  updateRange(7);

  for (int i = 0; i < 7; i++)
  {
    cout << a[i] << " ";
  }

  return 0;
}
