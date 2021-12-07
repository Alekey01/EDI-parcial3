/*
    Escriba un programa en C que dada la siguiente declaración de estructuras:

    typedef struct {
        char nombre[40];
        char pais[25];
    }DatosPersonales;

    typedef struct{
        DatosPersonales datos;
        char deporte[30];
        int numMedallas;
    }Deportista;

    1. Realice una función que lea de un archivo de TEXTO la información de los deportistas.
    2. Realice una función que reciba los deportistas leídos y calcule e imprima el número de medallas por
    deporte.

    Nota: Dentro del código existe un arreglo que contiene los nombres de todos los deportes que existen en el archivo.

        char deporte[6][30] = {"Natación", "Atletismo", "Ciclismo", "Gimnasia", "Equitacion", "Esgrima"};
*/

#include <stdio.h>
#include <string.h>

typedef struct {

    char nombre[40];
    char pais[25];

}DatosPersonales;

typedef struct{
    DatosPersonales datos;
    char deporte[30];
    int numMedallas;

}Deportista;

typedef char Deportes[6][30];

void leeInformacion(FILE *arch, Deportista *a, int m[20]);

int main()
{
    Deportista deportistas[100];
    // Puede cambiar la declaración de este arreglo a donde lo considere necesario
    //char deporte[6][30] = {"Natación", "Atletismo", "Ciclismo", "Gimnasia", "Equitacion", "Esgrima"};
    Deportes deporte = {"Natación", "Atletismo", "Ciclismo", "Gimnasia", "Equitacion", "Esgrima"};

    int medallas[20];

    FILE *archivo;

    archivo = fopen("deportistas.txt", "r");
    leeInformacion(archivo, deportistas, medallas);

    
    return 0;
}

void leeInformacion(FILE *arch, Deportista *a, int m[20])
{
    int pudoLeer;
    int i=0, cerrado;

    do
    {
        
        fscanf(arch, "%s", a->datos.nombre[i]);
        fscanf(arch, "%s", a->datos.pais[i]);
        fscanf(arch, "%s", a->deporte[i]);
        pudoLeer = fscanf(arch, "%d", a->numMedallas);

        m[i] = a->numMedallas;

        i++;

    }while (pudoLeer != EOF);

    cerrado = fclose(arch);

    if(cerrado == EOF) //fclose regresa EOF cuando no se puede cerrar correctamente    
    {
        printf("El archivo no se cerro bien");
    }

}

void imprimeMedallas(FILE *arch, Deportista *a, int m[20])
{
    for (int i = 0; i < 6; i++)
    {
       switch (i)
       {
       case 1:
           for(int j = 0; j < 15; i++)
           {
               if(a.deporte == "Natación")
               {

               }
           }
           break;
       
       default:
           break;
       }
    }
    
}