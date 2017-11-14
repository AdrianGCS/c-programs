#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int op1 = 7;
    int op2;
    printf ("operando 2 :");
    scanf (" %i", &op2) ;
    printf("%i + %i = %i\n",op1,op2,op1 + op2);
    printf("(2 x 3) / 2 + 255  = %i %i\n " ,(2 * 3) / 2 + 255, 32);

    return EXIT_SUCCESS;
}
