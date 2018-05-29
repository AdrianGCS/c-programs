#include <stdio.h>
#include <stdlib.h>

bool tiene_un_divisor(int dividendo,int divisor){
    if(dividendo%divisor==0){
        return true;
    }
    else{
        if(divisor-1==1){
            return false;
        }
        else{
            tiene_un_divisor(dividendo,divisor-1);
        }
    }
}

int main()
{
    if(tiene_un_divisor(82,81)==true){
        printf("El 8 tienen, al menos , un divisor \n");
    }

    return EXIT_SUCCESS;
}
