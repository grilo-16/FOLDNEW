#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "artistas.h"

int main() {
    char nome_arquivo[] = "Dado_txt";
    Artista artistas[MAX_ARTISTS];
    int num_artistas = 0;
    ler_artistas(nome_arquivo, artistas, &num_artistas);
    int opcao;
    do {
        mostrar_menu();
        scanf("%d", &opcao);
        getchar(); // Limpar o buffer do teclado
        switch (opcao) {
            case 1:
                inserir_artista(artistas, &num_artistas);
                salvar_artistas(nome_arquivo, artistas, num_artistas);
                break;
            case 2:
                removedor_artista(artistas, &num_artistas);
                salvar_artistas(nome_arquivo, artistas, num_artistas);
                break;
            case 3:
                editar_artista(artistas, num_artistas);
                salvar_artistas(nome_arquivo, artistas, num_artistas);
                break;
            case 4:
                buscar_binaria_artista(artistas, num_artistas);
                break;
            case 5:
                buscar_sequencial_album(artistas, num_artistas);
                break;
            case 6:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 6);
    return 0;
}
