#include <stdio.h>
#include <stdlib.h>
#include "bmp.h"

const char *source= "a.bmp";
const char *destin= "b.bmp";


int main(){
    FILE *pbmp = NULL;
    Header header;
    Color imagen[1280 * 697];
    int pixels = 1280 * 697;

    /* Leer el original */
    if (!(pbmp = fopen(source, "r"))){
        fprintf( stderr, "No hay imagen a.bmp de partida.\n" );
        return EXIT_FAILURE;
    }
    fread(&header, sizeof(Header), 1, pbmp);
    fseek(pbmp, header.bmp.data_offset, SEEK_SET);
    fread(imagen, sizeof(Color), pixels, pbmp);
    fclose(pbmp);

    /* Escala de grises */
    for (int i=0; i<pixels; i++){
        char media = imagen[i].r + imagen[i].g + imagen[i].b / 3;
        char Temporal = media-50;
        char Temporal2=(Temporal/3)/3;
        if(media<50){
            imagen[i+1].r-=Temporal2;
            imagen[i+1].g-=Temporal2;
            imagen[i+1].b-=Temporal2;
            if(i+1281<=1280*697){
                imagen[i+1280].r-=Temporal2;
            imagen[i+1280].g-=Temporal2;
            imagen[i+1280].b-=Temporal2;

            imagen[i+1+1280].r-=Temporal2;
            imagen[i+1+1280].g-=Temporal2;
            imagen[i+1+1280].b-=Temporal2;
            }

        }
        else{
            if(media>50){
                imagen[i+1].r-=Temporal2;
                imagen[i+1].g-=Temporal2;
                imagen[i+1].b-=Temporal2;
                if(i+1281<=1280*697){
                imagen[i+1280].r-=Temporal2;
                imagen[i+1280].g-=Temporal2;
                imagen[i+1280].b-=Temporal2;

                imagen[i+1+1280].r-=Temporal2;
                imagen[i+1+1280].g-=Temporal2;
                imagen[i+1+1280].b-=Temporal2;
                }
            }
        }
    }


/* Escribir la imagen */
if (!(pbmp = fopen(destin, "r+"))){
    fprintf( stderr, "No hay imagen b.bmp de destino.\n" );
    return EXIT_FAILURE;
}
fseek(pbmp, header.bmp.data_offset, SEEK_SET);
fwrite(imagen, sizeof(Color), pixels, pbmp);
fclose(pbmp);

return EXIT_SUCCESS;
}
