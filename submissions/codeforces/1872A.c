#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, b, c;
    int t;
    int ans = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        ans = 0;

        t = a - b;

        if (t < 0)
        {
            t *= -1;
        }

        if (t % (2 * c) == 0)
        {
            ans = t / (2 * c);
        }
        else
        {
            ans = t / (2 * c);
            ans++;
        }

        printf("%d\n", ans);
    }
}