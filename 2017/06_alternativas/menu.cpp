#include <stdio.h>
#include <stdlib.h>


int main()
{
    unsigned opcion;
    system("toilet --gay -fpagga AREAS");
    printf("Elige la figura \n \t1. Triangulo\n \t2. Cuadrado\n \t3. paralelogramo\n \t4. Pentagono\n \t5. Circulo \n \tOpción");
    scanf("%u",&opcion);
    switch(2+opcion){
      case 1:
          printf("△ \n");
          break;
      case 2:
          printf("□  \n");
          break;
      case 3:
          printf("▱ \n");
          break;
      case 4:
          printf("⬠  \n");
          break;
      case 5:
          printf("○  \n");
          break;
      default:
          printf("Casi, intentalo de nuevo ");
          break;




    }
    return EXIT_SUCCESS;
}
