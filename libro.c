#include <stdio.h>

#include "libro.h"

void ingresarLibro(Libro* libro)
{

    printf("Ingresa el nombre del libro: ");
    fgets(libro->nombre, 50, stdin);

    printf("Ingresa la editorial del libro: ");
    fgets(libro->editorial, 50, stdin);

    printf("Ingresa el costo del libro: ");
    scanf("%d", &libro->costo);

    printf("Ingresa el ano del libro: ");
    scanf("%d", &libro->ano);
    getchar();

    printf("Libro agregado con exito.\n");
}

void ingresarLibro2(Libro* libro1, Libro* libro2)
{

    printf("Ingresa el nombre del libro: ");
    fgets(libro2->nombre, 50, stdin);

    printf("Ingresa la editorial del libro: ");
    fgets(libro2->editorial, 50, stdin);

    printf("Ingresa el costo del libro: ");
    scanf("%d", &libro2->costo);

    printf("Ingresa el ano del libro: ");
    scanf("%d", &libro2->ano);
    getchar();

    libro1->siguiente_libro = libro2;
    printf("Libro agregado con exito.\n");
}

void mostrarTodosLosLibros(Libro* primer_libro)
{

    Libro* temp = primer_libro;

    while(temp != NULL)
    {
        printf("-----------------------------------------------\n");
        printf("El nombre del libro es: %s", temp->nombre);
        printf("El costo del libro es: %i pesos\n", temp->costo);
        printf("La editorial del libro es: %s", temp->editorial);
        printf("El ano del libro es: %i\n", temp->ano);
        temp = temp->siguiente_libro;
    }
}

