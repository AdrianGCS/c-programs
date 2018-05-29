#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)

typedef struct {
    char      signature[2];
    unsigned  size;
    unsigned short reserved1;
    unsigned short reserved2;
    unsigned  data_offset;
} BMPHeader;

typedef struct{
    unsigned Size;
    unsigned Width;
    unsigned Height;
    unsigned short planos;
    unsigned short bitsPixel;
    unsigned compresion;
    unsigned TImagen;
    unsigned ResolucionH;
    unsigned ResolucionV;
    unsigned Color;
    unsigned ContadorColor;
    unsigned rojo;
    unsigned verde;
    unsigned azul;
    unsigned reservado;
    unsigned Color_Space;
    unsigned GammaRED;
    unsigned GammaGreen;
    unsigned GammaBlue;
    unsigned Intent;
    unsigned ICCData;
    unsigned ICCSize;
    unsigned Reserved;
}DIBHeader;


void show(BMPHeader header,DIBHeader DIB) {
    printf("Signature:%c%c\n",header.signature[0],header.signature[1]);
    printf("Tamaño:%i\n",header.size);
    printf("Datos de imagen: %i (%Xh)\n", header.data_offset, header.data_offset);
    printf("Tamaño DIB:%i\n",DIB.Size);
    printf("Ancho:%i\n",DIB.Width);
    printf("Alto:%i\n",DIB.Height);
    printf("planos:%i\n",DIB.planos);
    printf("bitsPixel:%i\n",DIB.bitsPixel);
    printf("Compresion:%i\n",DIB.compresion);
    printf("Tamaño Imagen:%i\n",DIB.TImagen);
    printf("Contador de colores:%i\n",DIB.ContadorColor);
    printf("Rojo:%i\n",DIB.rojo);
    printf("Verde:%i\n",DIB.verde);
    printf("azul:%i\n",DIB.azul);
    printf("Color Space:%i\n",DIB.Color_Space);
    printf("Gamma de rojos:%i\n",DIB.GammaRED);
    printf("Gamma de verde:%i\n",DIB.GammaGreen);
    printf("Gamma de azul:%i\n",DIB.GammaBlue);
    printf("Intent:%i\n",DIB.Intent);
    printf("ICCDatos:%i\n",DIB.ICCData);
    printf("ICC tamaño:%i\n",DIB.ICCSize);


}

int main(){


    const char *filename= "fondo.bmp";
    FILE *pbmp = NULL;
    BMPHeader header;
    DIBHeader DIB;

    if (!(pbmp = fopen(filename, "r"))){
        fprintf( stderr, "No he encontrado el fichero.\n"  );
        return EXIT_FAILURE;
    }
    fread(&header, sizeof(BMPHeader), 1, pbmp);
    fread(&DIB, sizeof(DIBHeader), 1, pbmp);
    fclose(pbmp);

    show(header,DIB);


    return EXIT_SUCCESS;
}

