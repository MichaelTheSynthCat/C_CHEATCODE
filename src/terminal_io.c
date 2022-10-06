#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 43; // %i or %d
    float fl = 23.54f;
    double doub = 90.4534626;
    char c = 'a';

    printf("%d %f %f %c\n", num, fl, doub, c);
    printf("%.1f\n", fl);

    printf("zadaj postupne:\n");
    scanf("%i %f %lf", &num, &fl, &doub);
    printf("%i %f %f %c\n", num, fl, doub, c);
    return 0;
}