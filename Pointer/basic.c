#include <stdio.h>

/*
    char 1 byte = 8 bit = 0-255
    int 4 bytes
    float 4 bytes 
    double 8 bytes 
*/

//Pass by Refenrence
void function(int ptr)
{
    //printf("Get from parameter %d\n", *a);
    printf("Value of A in Func: %p\n", ptr);
    //*a = 1;
    //printf("Change in function %d\n", *a);
    printf("Address of A in Func: %p\n", &ptr);
}

int main()
{
    int a = 3;
    printf("Main A: %p\n", &a);
    function(a);
    //a = 1;
    //printf("Now a = %d", a);
}

/*
    ptr (function) = &a (main);
    ptr has its space;
*/