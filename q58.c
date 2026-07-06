#include <stdio.h>

int main()
{
    int n, a[100], temp;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    temp = a[0];

    for (int i = 0; i < n - 1; i++)
        a[i] = a[i + 1];

    a[n - 1] = temp;

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}