#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[100002] = {0};
    for (int i = 0; i < n; i++)
    {
        // count[arr[i]]++;
        int a;
        scanf("%d", &a);
        arr[a]++;
    }
    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n");
    return 0;
}