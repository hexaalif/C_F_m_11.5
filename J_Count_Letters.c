#include <stdio.h>
#include <string.h>

int main()
{
    // char s[1000001]; // time limit error;
    char s;
    int count[26] = {0};
    while (scanf("%c", &s) != EOF)
    {
        int value = s - 97;
        count[value]++;
    }
    for (int i = 0; i < 26; i++)
    {
        // printf("%s", s);
        if (count[i] != 0)
        {
            printf("%c : %d\n", i + 97, count[i]);
        }
    }
    return 0;
}