#include <stdio.h>

void swap(int* left, int* right)
{
    int temp = *left;
    *left = *right;
    *right = temp;
}

int main()
{
    int x = 3, y = 2;
    swap(&x, &y);
    printf("x=%d y=%d\n", x,y);
}