#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	// Imprime cabeçalho do jogo
	printf("************************************\n");
	printf("* Bem-vindo ao jogo de adivinhação *\n");
	printf("************************************\n");

	int segundos = time(0); // Segundos entre 1972 e o momento atual
	srand(segundos); // Alterar a semente da função rand para sempre gerar um número diferente
	
	int numero_secreto = rand() % 100; // Retorna um número entre 0 e 99
	int chute;
	int tentativas = 1;
	double pontos = 1000;

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

		double pontos_perdidos = (double) abs(chute - numero_secreto) / 2;
		pontos = pontos - pontos_perdidos;
	}

	printf("Você acertou em %d tentativas\n", tentativas);
	printf("Fim de jogo!\n");
	printf("Total de pontos %.1f\n", pontos);

}