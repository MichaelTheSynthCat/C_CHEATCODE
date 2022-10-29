#include <stdio.h>
#include <stdlib.h>

double sum (double a, double b)
{
    return a + b;
}

double difference (double a, double b)
{
    return a - b;
}

double product (double a, double b)
{
    return a * b;
}

double division (double a, double b)
{
    return a / b;
}

int main(int argc, char *argv[])
{
    if(argc != 4)
    {
        fprintf(stderr, "Invalid number of arguments\n");
        return 1;
    }

    double (*func)(double, double);
    double x = atof(argv[1]), y = atof(argv[3]);
    switch (argv[2][0])
    {
    case '+':
        func = sum;
        break;
    case '-':
        func = difference;
        break;
    case '*':
        func = product;
        break;
    case '/':
        func = division;
        break;
    default:
        func = sum;
        break;
    }

    printf("ans = %f\n", func(x, y));
    return 0;
}