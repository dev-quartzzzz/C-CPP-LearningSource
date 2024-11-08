#include <stdio.h>

void main()
{
    char str[11];
    int sum = 0;
    scanf("%s", str);
    for(int i = 0; i < 11 && str[i] != '\0'; i++)
    {
        sum += (int) str[i];
    }
    printf("ASCII Sum: %d", sum);
}