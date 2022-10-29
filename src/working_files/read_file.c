#include <stdio.h>

int main()
{
    FILE *f;
    if((f = fopen("read_text.txt", "r")) == NULL)
    {
        fprintf(stderr, "Cannot open the file.\n");
        return 1;
    }

    char c;
    while ((c = fgetc(f)) != EOF)
    {
        putchar(c);
    }
    fclose(f);

    return 0;
}