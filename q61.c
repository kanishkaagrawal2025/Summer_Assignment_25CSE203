#include <stdio.h>

int main() {
    int n, i, sum = 0;
    scanf("%d", &n);
    int a[n - 1];
    for(i = 0; i < n - 1; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < n - 1; i++)
        sum += a[i];
    printf("%d", (n * (n + 1)) / 2 - sum);
    return 0;
}