/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Juan Retamales
 *
 * Created on 15 de abril de 2017, 20:45
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


/*
 * Functiones
 */
int validadorIgualesConsecutivos(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int c10, int c11, int c12);
int validadorImparImpar(int c1, int c12);
int validadorConsecutivos(int c1, int c2, int c3, int c4, int c5, int c6, int c7, int c8, int c9, int c10, int c11, int c12);


int main(int argc, char** argv) {
    
    int entrada[12];
    int largo = 0;
    
    printf("Iniciando...ok \n");
    int a,b,c,d,e,f,g,h,i,j,k,l;
    
    int x;
    int y=0;
    
    printf("Entrada.in...");
    
    /*printf("Ingrese entrada.in: scanf("%i",&nota1);\n");*/
    FILE *archivo;
    int caracter;

    archivo = fopen("entrada.in","r");

    if (archivo == NULL)
    {
        printf("\nError de apertura del archivo. \n\n");
    }
    else
    {
        while((caracter = fgetc(archivo)) != EOF)
        {
            
            /* Lee el archivo entrada.in pero en formato UTF8 sin BOM */
            if(isdigit(caracter)!=0)
            {
                if(largo>0)
                {
                    y=0;
                    for ( x = 0; x < largo; x++ )
                    {
                        if(entrada[x]==(((int)caracter)-48))
                        {
                            y=1;
                        }
                    }
                }
                if(y==0)
                {
                    entrada[largo]=((int)caracter)-48;
                    largo++;
                }
            }
        }
    }
    fclose(archivo);
    printf("ok \n");
    printf("Formando las  combinaciones y guardandolo en salida.out...");
    /* -Creo la combinacion*/
    FILE *fp;
 	
    fp = fopen ( "salida.out", "w" );
    fclose ( fp );
    char str[10];
    
    for ( a = 0; a < largo || a < 10; a++ )
    {
        for ( b = 0; b < largo; b++ )
        {
            for ( c = 0; c < largo; c++ )
            {
                for ( d = 0; d < largo; d++ )
                {
                    for ( e = 0; e < largo; e++ )
                    {
                        for ( f = 0; f < largo; f++ )
                        {
                            for ( g = 0; g < largo; g++ )
                            {
                                for ( h = 0; h < largo; h++ )
                                {
                                    for ( i = 0; i < largo; i++ )
                                    {
                                        for ( j = 0; j < largo; j++ )
                                        {
                                            for ( k = 0; k < largo; k++ )
                                            {
                                                for ( l = 0; l < largo; l++ )
                                                {
                                                    if(validadorIgualesConsecutivos(entrada,12)==0 && validadorImparImpar(entrada[a],entrada[l]) && validadorConsecutivos(entrada,12)==0)
                                                    {
                                                        fp = fopen ( "salida.out", "a" );
                                                        sprintf(str, "%d", entrada[a]);
                                                        fprintf(fp, "%s", str);
                                                        sprintf(str, "%d", entrada[b]);
                                                        fprintf(fp, "%s", str);
                                                        sprintf(str, "%d", entrada[c]);
                                                        fprintf(fp, "%s", str);
                                                        sprintf(str, "%d", entrada[d]);
                                                        fprintf(fp, "%s", str);
                                                        sprintf(str, "%d", entrada[e]);
                                                        fprintf(fp, "%s", str);
                                                        sprintf(str, "%d", entrada[f]);
                                                        fprintf(fp, "%s", str);
                                                        sprintf(str, "%d", entrada[g]);
                                                        fprintf(fp, "%s", str);
                                                        sprintf(str, "%d", entrada[h]);
                                                        fprintf(fp, "%s", str);
                                                        sprintf(str, "%d", entrada[i]);
                                                        fprintf(fp, "%s", str);
                                                        sprintf(str, "%d", entrada[j]);
                                                        fprintf(fp, "%s", str);
                                                        sprintf(str, "%d", entrada[k]);
                                                        fprintf(fp, "%s", str);
                                                        sprintf(str, "%d", entrada[l]);
                                                        fprintf(fp, "%s", str);
                                                        fprintf(fp, "\n");
                                                        fclose ( fp );
                                                    }
                                                }
                                                
                                            }
                                        }
                                    }
                                    
                                }
                                
                            }
                        }
                    }
                }
            }
        }
    }
    
    printf("ok \n");
    return (EXIT_SUCCESS); 
}
/*
 * validadorIgualesConsecutivos  - verifica que no existan 3 numeros iguales consecutivos
 *
 *Entrada: arreglo de 12 numeros de formato int.
 *Salida: Numero int 1 si existen 3 numeros iguales consecutivos o 0 de lo contrario.
 */
int validadorIgualesConsecutivos(int c[], int largo)
{
    for(int m=0; m<largo; m++)
    {
        if(c[m]==c[m+1] && c[m+1]==c[m+2])
        {
            printf("Validador 1 \n");
            return 1;
        }
    }
    return 0;
}
/*
 * validadorImparImpar - verifica que si el primer numero es impar, no termine en impar
 *
 *Entrada: 2 numeros de formato int.
 *Salida: Numero int 0 o 1.
 */
int validadorImparImpar(int c1, int c12)
{
    if(c1%2==1 && c12%2==1)
    {
        return 1;
    }
    return 0;
}

/*
 * validadorConsecutivos - verifica que no tenga mas de 3 numeros consecutivos
 *
 *Entrada: 12 numeros de formato int.
 *Salida: Numero int 1 si existen 4 numeros consecutivos o 0 de lo contrario.
 */
int validadorConsecutivos(int c[], int largo)
{
    for(int m=0; m<largo; m++)
    {
        if((c[m]+4)<10)
        {
            if((c[m]+1)==(c[m+1]) && (c[m]+2)==(c[m+2]) && (c[m]+3)==(c[m+3]) && (c[m]+4)==(c[m+4]))
            {
                return 1;
            }
        }
    }
    return 0;
}