#pragma once
typedef enum tipo_libro{
    HISTORIA, TECNICO, CULTURA
}Tipo;

typedef struct libro {
	char nombre[50];
	char editorial[50];
	int costo;
	int ano;
	Tipo tipo;
} Libro;
