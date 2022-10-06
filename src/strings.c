#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *str = "Hello world!";
    printf("%s\n", str);

    char vstup[101];
    scanf("%100s", vstup);
    // precitaj jeden riadok
    // scanf("%100[^\n]", vstup);
    printf("%s\n", vstup);

    int a = atoi("5.6");
    float f = atof("8.62");
}