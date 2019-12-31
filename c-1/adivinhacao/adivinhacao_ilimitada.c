#include <stdio.h>

int main() {
	// Imprime cabeçalho do jogo
	printf("************************************\n");
	printf("* Bem-vindo ao jogo de adivinhação *\n");
	printf("************************************\n");
	
	int numero_secreto = 42;
	int chute;
	int tentativas = 1;

	while(1) {
		printf("\nTentativa %d:\n", tentativas);
		printf("Qual é o seu chute? ");
		scanf("%d", &chute);
		printf("Seu chute foi: %d\n", chute);

		if(chute < 0) {
			printf("Você não pode chutar números negativos\n");			
			continue;
		}

		int acertou = (chute == numero_secreto);
		int maior = chute > numero_secreto;

		if(acertou) {
			printf("\nParabéns! Você acertou!\n");

			break;
		} else if(maior) {			
			printf("Seu chute foi maior que o número secreto\n");
		} else {
			printf("Seu chute foi menor que o número secreto\n");
		}

		tentativas++;
	}

	printf("Você acertou em %d tentativas\n", tentativas);
	printf("Fim de jogo!\n");

}