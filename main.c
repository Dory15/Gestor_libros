#include <stdio.h>
void menu();

int main(int argc, char** argv){

    menu();
    return 0;
}

void menu(){
    puts("Teclea la opcion deseada");
    puts("a) Ingresar un libro.");
    puts("b) Buscar un libro.");
    puts("c) Eliminar un libro.");
    puts("d) Modificar un libro.");
}
