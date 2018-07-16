#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int numeroDoUsuario;
int numeroDoBot;
int pontosBot = 0;
int pontosUsuario = 0;

void imprimirLinha() {
	printf("\n=========================\n");
}

//Função que indica a espera da entrada do usuario
void sinalDeEntrada() {
	printf("\n-> ");
}

//Função onde o numero do bot é gerado para ser usado depois
int geradorNumeroDoBot() {
	srand(time(NULL));
	numeroDoBot = rand() % 3 + 1;
	return numeroDoBot;
}

void duelar() {
	if(numeroDoUsuario == 1 && numeroDoBot == 1)
	{
		printf("Voce jogou Pedra\n");
		printf("Vladimir jogou Pedra\n");
		printf("Empate\n");
	}

	if(numeroDoUsuario == 1 && numeroDoBot == 2)
	{
		printf("Voce jogou Pedra\n");
		printf("Vladimir jogou Papel\n");
		printf("Voce perdeu\n");
		pontosBot++;
	}

	if(numeroDoUsuario == 1 && numeroDoBot == 3)
	{
		printf("Voce jogou Pedra\n");
		printf("Vladimir jogou Tesoura\n");
		printf("Voce ganhou\n");
		pontosUsuario++;
	}

	if(numeroDoUsuario == 2 && numeroDoBot == 1)
	{
		printf("Voce jogou Papel\n");
		printf("Vladimir jogou Pedra\n");
		printf("Voce ganhou\n");
		pontosUsuario++;
	}

	if(numeroDoUsuario == 2 && numeroDoBot == 2)
	{
		printf("Voce jogou Papel\n");
		printf("Vladimir jogou Papel\n");
		printf("Empate\n");
	}

	if(numeroDoUsuario == 2 && numeroDoBot == 3)
	{
		printf("Voce jogou Pedra\n");
		printf("Vladimir jogou Tesoura\n");
		printf("Voce ganhou\n");
		pontosUsuario++;
	}

	if(numeroDoUsuario == 3 && numeroDoBot == 1)
	{
		printf("Voce jogou Tesoura\n");
		printf("Vladimir jogou Pedra\n");
		printf("Voce perdeu\n");
		pontosBot++;
	}

	if(numeroDoUsuario == 3 && numeroDoBot == 2)
	{
		printf("Voce jogou Tesoura\n");
		printf("Vladimir jogou Papel\n");
		printf("Voce ganhou\n");
		pontosUsuario++;
	}

	if(numeroDoUsuario == 3 && numeroDoBot == 3)
	{
		printf("Voce jogou Tesoura\n");
		printf("Vladimir jogou Tesoura\n");
		printf("Empate\n");
	}
}

//Função onde o menu se desenvolve
void menu() {
	imprimirLinha();
	printf("[1] Pedra\n");
	printf("[2] Papel\n");
	printf("[3] Tesoura\n");
	imprimirLinha();
	printf("(Voce) VS (Vladimir)\n");
	printf("%d - %d", pontosUsuario, pontosBot);
	imprimirLinha();
	sinalDeEntrada();
	scanf("%d", &numeroDoUsuario);
	imprimirLinha();

	while(numeroDoUsuario < 1 || numeroDoUsuario > 3)
	{
		printf("ERRO: Numero invalido\n");
		sinalDeEntrada();
		scanf("%d", &numeroDoUsuario);
	}	
}