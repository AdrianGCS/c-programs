#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    FILE *tubo;

    tubo = fopen("a.txt", "r");
    fread(&num ,sizeof(int),1, tubo);
    fclose(tubo);
    printf("%i(%Xh)\n",num,num);

    return EXIT_SUCCESS;
}
