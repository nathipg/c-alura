#include <stdio.h>

int main() {
	// Imprime cabeçalho do jogo
	printf("************************************\n");
	printf("* Bem-vindo ao jogo de adivinhação *\n");
	printf("************************************\n\n");
	
	int numero_secreto = 42;

	int chute;
	
	printf("Qual é o seu chute? ");
	scanf("%d", &chute);
	printf("Seu chute foi: %d\n", chute);
}