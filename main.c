#include <stdio.h>
#include <stdlib.h>

#include "libro.h"

void menu();

Libro *primer_libro, *ultimo_libro;

int main(int argc, char** argv)
{
    menu();
    return 0;
}

void menu()
{
    char opcion;
    do
    {
        printf("Teclea la opcion deseada.\n");
        printf("a) Ingresar un libro.\n");
        printf("b) Buscar un libro.\n");
        printf("c) Eliminar un libro.\n");
        printf("d) Modificar un libro.\n");
        printf("e) Mostrar todos los libros.\n");
        opcion = getchar();
        getchar();
    }
    while(opcion != 'a' && opcion != 'b' && opcion != 'c' && opcion != 'd' && opcion != 'e');

    switch(opcion)
    {
    case 'a':
        if(primer_libro == NULL)
        {
            primer_libro = malloc(sizeof(Libro));
            ingresarLibro(primer_libro);
            ultimo_libro = primer_libro;
            menu();
        }
        else
        {
            Libro* temp = malloc(sizeof(Libro));
            ingresarLibro2(ultimo_libro, temp);
            ultimo_libro = temp;
            menu();
        }
        break;

    case 'b':

        break;

    case 'c':

        break;

    case 'd':

        break;

    case 'e':
        mostrarTodosLosLibros(primer_libro);
        break;

    default:
        exit(1);
        break;

    }
}
