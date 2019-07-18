#pragma once

typedef struct libro {
	char nombre[51];
	char editorial[51];
	int costo;
	int ano;
	struct libro* siguiente_libro;
} Libro;

void ingresarLibro(Libro* libro);

void ingresarLibro2(Libro* libro1, Libro* libro2);

void mostrarTodosLosLibros(Libro* primer_libro);
