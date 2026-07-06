#include <stdio.h>

int main()
{
    int n, a[100], key, found = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            printf("Found at index %d", i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Not Found");

    return 0;
}