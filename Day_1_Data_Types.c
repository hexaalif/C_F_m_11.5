

#include <stdio.h>
#include <string.h>
int main()
{
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int i1;
    double d1;
    char ac[1000];
    scanf("%d", &i1);
    scanf("%lf\n", &d1);
    gets(ac);
    // int sum = i + d;
    printf("%d\n", i + i1);
    printf("%.1lf\n", d + d1);
    printf("%s", s);
    printf("%s", ac);
    return 0;
}