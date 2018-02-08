#include <stdio.h>
#include <stdlib.h>

int es_par(int num1){
 
    if(num1 % 2 == 0)
      return true;
    return false;

}

int main()
{
    if (es_par(3))
        printf("Es par. \n");
    else
        printf("No es par \n");

    return EXIT_SUCCESS;
}
