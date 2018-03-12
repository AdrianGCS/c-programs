#define Num 5
#define total 3
 //#define Num2 2


void interfaz(int lugar[total][total]){
    // apartado se encarga de dibujar la matriz es decir "El tres en raya"
    for(int y = 0; y < total;y++ ){
        //Este apartado dibuja 2 de las 3 lineas
        for(int x = 0; x < Num; x++)
            for(int x = 0; x < total; x++)
                printf("⏹");
        printf("⏹");
        printf("\n");
        // se encarga de dibujar los espacios entre las lineas
        for(int W = 0 ; W < total;W++ ){
            for(int z = 0; z < total; z++){
                printf("⏹ ");
                //esto metera en el espacio entre líneas 2 una X , una O o un espacio
                if(z == 2){
                    if(lugar[W][z] == 1)
                        printf("X");
                    if(lugar[W][z] == 2)
                        printf ("O");
                    else
                        printf(" ");
                }
                else
                    printf(" ");
                printf("  ");}
            printf("⏹");
            printf("\n");
        }
        //dibuja la línea final
        if(y == total-1){
            for(int x = 0; x < Num; x++)
                for(int x = 0; x < total; x++)
                    printf("⏹");
            printf("⏹");

            printf("\n");
        }

    }
}

