#ifndef ARTISTAS_H
#define ARTISTAS_H

#define MAX_ALBUMS 10
#define MAX_ARTISTS 100

typedef struct {
    char nome[100];
    char genero[50];
    char local[100];
    char albums[MAX_ALBUMS][100];
    int num_albums;
} Artista;

void salvar_artistas(char *nome_arquivo, Artista artistas[], int num_artistas);
void ler_artistas(char *nome_arquivo, Artista artistas[], int *num_artistas);
int comparar_artistas(const void *a, const void *b);
void inserir_artista(Artista artistas[], int *num_artistas);
void removedor_artista(Artista artistas[], int *num_artistas);
void editar_artista(Artista artistas[], int num_artistas);
void buscar_binaria_artista(Artista artistas[], int num_artistas);
void buscar_sequencial_album(Artista artistas[], int num_artistas);
void mostrar_menu();

#endif
