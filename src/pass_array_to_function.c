#include <stdlib.h>
#include <stdio.h>

int get_max(int arr[], int size)
{
    int max = arr[0];
    for(int i=1; i<size; i++)
    {
        max = max < arr[i] ? arr[i] : max;
    }
    return max;
}

int main()
{
    int numbers[] = {4, 1, -5, 1, 9, 17, -89, 0, 8, -4891};
    printf("The greatest number is %d\n", get_max(numbers, 10));
    return 0;
}