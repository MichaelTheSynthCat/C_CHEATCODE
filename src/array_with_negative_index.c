#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];
    int *x;
    for(int i=0; i<10; i++)
    {
        arr[i] = i;
    }
    x = &arr[4];
    printf("%i\n", x[-2]);
}