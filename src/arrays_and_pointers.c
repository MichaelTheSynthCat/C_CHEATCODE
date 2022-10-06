#include <stdio.h>

int main()
{
    int numbers[10];
    for(int i = 0; i< 10; i++)
    {
        numbers[i] = i+1;
    }
    float fl[3] = { 2.5f, -84.3f, 7.0f};

    int num = 42;
    int *p_int = &num;
    printf("Pointer p address: %p\nValue in pointer: %i\n", p_int, *p_int);

    float *p_array = &fl;
    printf("Index 1 of fl: %f\n", *(p_array+1));
}