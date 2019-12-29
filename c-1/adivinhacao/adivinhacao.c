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

	int acertou = (chute == numero_secreto);

	if(acertou) {
		printf("Parabéns! Você acertou!\n");
	} else {
		printf("Você errou.\n");

		int maior = chute > numero_secreto;
		if(maior) {
			printf("Seu chute foi maior que o número secreto\n");
		} else {
			printf("Seu chute foi menor que o número secreto\n");

		}
	}

}