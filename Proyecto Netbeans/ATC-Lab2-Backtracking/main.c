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
int validadorIgualesConsecutivos(int c[], int tamanio);
int validadorImparImpar(int c1, int c12);
int validadorConsecutivos(int c[], int tamanio);


int main(int argc, char** argv) 
{
    
    int entrada[12];
    int largo = 0;
    
    printf("Iniciando...ok \n");
    int a,b,c,d,e,f,g,h,i,j,k,l;
    
    int x;
    int y=0;
    
    printf("Entrada.in...");
    
    /* Preparandose para leer el archivo entrada.in */
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
    fclose(fp);
    
    for ( a = 0; a < largo; a++ )
    {
        for ( b = 0; b < largo; b++ )
        {
            for ( c = 0; c < largo; c++ )
            {
                int temp[] = {entrada[a], entrada[b], entrada[c]};
                if(validadorIgualesConsecutivos(temp,3)==0)
                {
                    for ( d = 0; d < largo; d++ )
                    {
                        int temp2[] = {entrada[a], entrada[b], entrada[c], entrada[d]};
                        if(validadorIgualesConsecutivos(temp2,4)==0 && validadorConsecutivos(temp2,4)==0)
                        {
                            for ( e = 0; e < largo; e++ )
                            {
                                int temp3[] = {entrada[a], entrada[b], entrada[c], entrada[d], entrada[e]};
                                if(validadorIgualesConsecutivos(temp3,5)==0 && validadorConsecutivos(temp3,5)==0)
                                {
                                    for ( f = 0; f < largo; f++ )
                                    {
                                        int temp4[] = {entrada[a], entrada[b], entrada[c], entrada[d], entrada[e], entrada[f]};
                                        if(validadorIgualesConsecutivos(entrada,6)==0 && validadorConsecutivos(temp4,6)==0)
                                        {
                                            for ( g = 0; g < largo; g++ )
                                            {
                                                int temp5[] = {entrada[a], entrada[b], entrada[c], entrada[d], entrada[e], entrada[f], entrada[g]};
                                                if(validadorIgualesConsecutivos(temp5,7)==0 && validadorConsecutivos(temp5,7)==0)
                                                {
                                                    for ( h = 0; h < largo; h++ )
                                                    {
                                                        int temp6[] = {entrada[a], entrada[b], entrada[c], entrada[d], entrada[e], entrada[f], entrada[g], entrada[h]};
                                                        if(validadorIgualesConsecutivos(temp6,8)==0 && validadorConsecutivos(temp6,8)==0)
                                                        {
                                                            for ( i = 0; i < largo; i++ )
                                                            {
                                                                int temp7[] = {entrada[a], entrada[b], entrada[c], entrada[d], entrada[e], entrada[f], entrada[g], entrada[h], entrada[i]};
                                                                if(validadorIgualesConsecutivos(temp7,9)==0 && validadorConsecutivos(temp7,9)==0)
                                                                {
                                                                    for ( j = 0; j < largo; j++ )
                                                                    {
                                                                        int temp8[] = {entrada[a], entrada[b], entrada[c], entrada[d], entrada[e], entrada[f], entrada[g], entrada[h], entrada[i], entrada[j]};
                                                                        if(validadorIgualesConsecutivos(temp8,10)==0 && validadorConsecutivos(temp8,10)==0)
                                                                        {
                                                                            for ( k = 0; k < largo; k++ )
                                                                            {
                                                                                int temp9[] = {entrada[a], entrada[b], entrada[c], entrada[d], entrada[e], entrada[f], entrada[g], entrada[h], entrada[i], entrada[j], entrada[k]};
                                                                                if(validadorIgualesConsecutivos(temp9,11)==0 && validadorConsecutivos(temp9,11)==0)
                                                                                {
                                                                                    for ( l = 0; l < largo; l++ )
                                                                                    {
                                                                                        int temp10[] = {entrada[a], entrada[b], entrada[c], entrada[d], entrada[e], entrada[f], entrada[g], entrada[h], entrada[i], entrada[j], entrada[k], entrada[l]};
                                                                                        if(validadorIgualesConsecutivos(temp10,12)==0 && validadorImparImpar(entrada[a],entrada[l])==0 && validadorConsecutivos(temp10,12)==0)
                                                                                        {
                                                                                            fp = fopen ( "salida.out", "a" );
                                                                                            fprintf(fp, "%d%d%d%d%d%d%d%d%d%d%d%d \n", entrada[a], entrada[b], entrada[c], entrada[d], entrada[e], entrada[f], entrada[g], entrada[h], entrada[i], entrada[j], entrada[k], entrada[l]);
                                                                                            //printf("%d%d%d%d%d%d%d%d%d%d%d%d \n", entrada[a], entrada[b], entrada[c], entrada[d], entrada[e], entrada[f], entrada[g], entrada[h], entrada[i], entrada[j], entrada[k], entrada[l]);
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
int validadorIgualesConsecutivos(int c[], int tamanio)
{
    for(int m=0; m<(tamanio-2); m++)
    {
        if(c[m]==c[m+1] && c[m+1]==c[m+2])
        {
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
int validadorConsecutivos(int c[], int tamanio)
{
    for(int m=0; m<(tamanio-4); m++)
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