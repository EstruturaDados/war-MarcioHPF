// ============================================================================
//         PROJETO WAR ESTRUTURADO - DESAFIO DE CÓDIGO
// ============================================================================

// ============================================================================
//         PROJETO WAR ESTRUTURADO - DESAFIO DE CÓDIGO
// ============================================================================
#include <stdio.h>
#include <string.h>

/*
Estrutura que representa um território do jogo.
Cada território possui um nome, uma cor de exército e uma quantidade de tropas.
*/
struct Territorio {
char nome[30];
char cor[10];
int tropas;
};

int main() {
struct Territorio territorios[5]; // Vetor para armazenar 5 territórios
int i;

printf("=== Sistema de Cadastro de Territórios ===\n\n");

// Cadastro dos 5 territórios
for (i = 0; i < 5; i++) {
    printf("--- Cadastro do território %d ---\n", i + 1);

    printf("Nome do território: ");
    scanf(" %29[^\n]", territorios[i].nome); // Lê string com espaços

    printf("Cor do exército(Ex: Azul, vermelho): ");
    scanf(" %9s", territorios[i].cor); // Lê string sem espaços

    printf("Numero de tropas: ");
    scanf("%d", &territorios[i].tropas);

    printf("\n");
}

// Exibição dos dados cadastrados
printf("\n=== MAPA DO MUNDO - ESTADO ATUAL ===\n");
for (i = 0; i < 5; i++) {
    printf("\nTerritório %d:\n", i + 1);
    printf("Nome: %s\n", territorios[i].nome);
    printf("Cor do exército: %s\n", territorios[i].cor);
    printf("Tropas: %d\n", territorios[i].tropas);
}

return 0;
}
