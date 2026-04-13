#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <string.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese"); 
	int opcao;

		printf("        +-----------------------------------+\n");
		printf("        |          MENU DO JOGOS            |\n");
		printf("        +-----------------------------------+\n");
		while(1){
		printf("1 - Primeiro Jogo\n");
		printf("2 - Segundo Jogo\n");
		printf("3 - Terceiro Jogo\n");
		printf("4 - Sair\n");
		if(scanf("%d", &opcao) != 1){
			printf("Entrada invalida. Por favor, digite um numero.\n");
			while(getchar() != '\n'); // Limpa o buffer do teclado
			Sleep(1500);
       		system("cls");
        	continue;	
		}
		
		//do{
		if (opcao == 1)
		{
		  jogo_das_perguntas();
		}
		
		else if (opcao == 2)
		{
			jogo_da_cobra_la_ele();
		}
		
		else if (opcao == 3)
		{
			Gousmas_War();
			
		}
		
		else if (opcao == 4)
		{
			printf("Obrigado por jogar! Ate a proxima!\n");
			exit(0);
			break;
		}
		else
		{
			printf("opcao invalida, tente novamente\n");
			Sleep(1000);
			system("cls");	
		}
		}
		return 0;
	}
	
	void jogo_das_perguntas();
	void jogo_das_perguntas(){

	printf("        +-----------------------------+\n");
	printf("        |        PRIMEIRO JOGO        |\n");
    printf("        +-----------------------------+\n");

	printf("Neste jogo de perguntas e respostas, o jogador sera testado em uma variedade de topicos, incluindo cultura pop, ciencia, historia e muito mais. O objetivo do jogo e responder corretamente a maioria das perguntas para vencer. Prepare-se para desafiar seus conhecimentos e se divertir ao mesmo tempo!\n");

	getchar();
    getchar();
    system("cls");
    
	printf("Carregando");
	 for(int i = 0; i < 3; i++) {
     printf(".");
     fflush(stdout);
     Sleep(500);
	
    }
	printf("\naperte enter duas vezes para continuar\n");
	getchar();
    getchar();
    system("cls");

	int op,resposta;

	printf("        +-----------------------------+\n");
	printf("        |      PRIMEIRA PERGUNTA      |\n");
    printf("        +-----------------------------+\n");
	do{
	 printf("qual a melhor bomba pra tomar ?\n");
	 printf("1 - deca \n 2 - Durateston\n 3 - Deposteron\n 4 - Oxandrolona\n ");
	printf("digite o numero da resposta correta:\n");

	 if(scanf("%d", &resposta ) != 1){
			printf("Entrada invalida. Por favor, digite um numero.\n");
			while(getchar() != '\n');
			Sleep(1500);
       		system("cls");
        	continue;	
		}

	}while(resposta < 1 || resposta > 4);

	if (resposta == 2)
	{
		printf("resposta certa\n");
		printf("FAKE NATTY!\n");
	}
	 else
	{
		printf("vc errou seu frango\n");
		printf("a resposta certa e durareston\n");
	}

        
	do{
	printf("        +-------------------------------+\n");
	printf("        |         SEGUNDA PERGUNTA      |\n");
    printf("        +-------------------------------+\n");
		
	 printf("Em Game of Thrones, qual  o lema oficial da Casa Stark?\n");
	 printf("1 - O Fogo Tudo Consomen\n ");
	 printf("2 - O Inverno esta Chegando\n 3 - Ouvir-nos-ao Rugir\n 4 - Familia, Dever, Honra\n ");
	 printf("digite o numero da resposta correta:\n");	

		if(scanf("%d", &resposta ) != 1){
			printf("Entrada invalida.\n");
			while(getchar() != '\n');
			Sleep(1000);
       		system("cls");
        	continue;	
		}
		}while (resposta < 1 || resposta > 4  );

	if (resposta == 2)
	{
		printf("resposta certa\n");
		printf("aiai ta com muito tempo livre\n");
	}
	 else 
	{
		printf("vc errou kkkkkkk :)\n");
       printf("a resposta certa e O Inverno esta Chegando\n");	
	}


	

	do{
	printf("        +--------------------+\n");
	printf("        | TERCEIRA PERGUNTA  |\n");
    printf("        +--------------------+\n");
	
	 printf("Como o nome do protagonista do jogo pokemon fire red ?\n");
	 printf("1 - ash \n 2 - green \n 3 - red \n 4 - brock\n ");
	 
	if(scanf("%d", &resposta ) != 1){
			printf("Entrada invalida.\n");
			while(getchar() != '\n');
			Sleep(1000);
       		system("cls");
        	continue;	
		}

	
		}while (resposta < 1 || resposta > 4 );
	if (resposta == 3)

	{
		printf("resposta certa\n");
		printf("boa pai isso nao e mas do que tu obrigacao saber\n");
	}
	 else
	{
		printf("vc errou egua tu nao teve infancia\n");
		printf("a resposta certa e red\n");
	}
	
do{
    printf("        +--------------------+\n");
	printf("        |  QUARTA PERGUNTA   |\n");
    printf("        +--------------------+\n");
	
	 printf(" Qual e a principal funcao da hemoglobina, proteina encontrada em grande quantidade nos globulos vermelhos (hemacias)?\n");
	 printf("1 - Transportar oxigenio \n 2 - Produzir energia \n 3 - Defesa imunologica \n 4 - Coagulacao do sangue\n ");
	 scanf("%d", &resposta);
	
	if(scanf("%d", &resposta ) != 1){
			printf("Entrada invalida. \n");
			while(getchar() != '\n');
			Sleep(1000);
       		system("cls");
        	continue;	
		}

	}while (resposta < 1 || resposta > 4);
	if (resposta == 1)
	{
		printf("resposta certa\n");
		printf("boa pai isso pq o curso que tu faz e engenharia da computacao\n");
	}

	 else
	{
		printf("vc errou mas pra essa eu passo pano pra ti pq tu nem faz medicina\n");
		printf("a resposta certa e transportar oxigenio\n");
	}

do{
    printf("        +--------------------+\n");
	printf("        |  QUINTA PERGUNTA   |\n");
    printf("        +--------------------+\n");
	
	 printf(" qual e a principal funcao do coracao?\n");
	 printf("1 - sofrer \n 2 - bate \n 3 - bombear sangue pro corpo \n 4 - ser iludido\n ");
	
	 if(scanf("%d", &resposta ) != 1){
			printf("Entrada invalida.\n");
			while(getchar() != '\n');
			Sleep(1000);
       		system("cls");
        	continue;	
		}
	}while (resposta < 1 || resposta > 4);

	if (resposta == 1)
	{
		printf("resposta certa\n");
		printf("eu sei pai doe mas e so asinar a sua carteira de trabalho\n");
	}

	 else
	{
		printf("calma gerreiro ainda nao chegou sua vez\n");
		printf("a resposta certa e sofrer\n");
	}
	do{
	 printf("vc quer jogar denovo ir pro proximo jogo sair ou voltar pro menu?\n");
	 printf("1 - sim\n 2 - proximo jogo\n 3 - nao\n 4 - menu\n");
	 
	if(scanf("%d", &op) != 1){
			printf("Entrada invalida. Por favor, digite um numero.\n");
			while(getchar() != '\n'); // Limpa o buffer do teclado
			Sleep(1500);
       		system("cls");
        	continue;	
		}
	}while (op < 1 || op > 4);
	
	switch(op){
	
	case 1:
	jogo_das_perguntas();	
	break;
	
	case 2:
		jogo_da_cobra_la_ele();
	break;

	case 3:
	op == 3;
		printf("Obrigado por jogar! Ate a proxima!\n");
		exit(0);
		break;
	case 4:
	op == 4;
		system("cls");
		main();
		break;
	default:
		printf("Opcao invalida.\n voce vai ser direcionado para o proximo jogo.\n");
		jogo_da_cobra_la_ele();
	}
	}
	void jogo_da_cobra_la_ele();
	void jogo_da_cobra_la_ele(){

		char jogador1[50],jogador2[50];
		int escolha, botao, cobra, op;
		int vivo = 1;

	printf("        +--------------------+\n");
	printf("        |   SEGUNDO JOGO     |\n");
    printf("        +--------------------+\n");

	printf("A historia do jogo se passa dentro de uma tumba egipcia onde dois\nexploradores ficaram presos. No centro da sala, ha cinco caixas: uma delas\n");
	printf("contem o botao para abrir a porta, enquanto uma outra esconde uma cobra\nmortal. A cada rodada (final do jogo), o local do botao e da cobra muda de\ncaixa de forma aleatoria, aumentando o desafio e a imprevisibilidade do jogo.\n");
	getchar();
    getchar();
    system("cls");
    
	printf("Carregando");
	 for(int i = 0; i < 3; i++) {
     printf(".");
     fflush(stdout);
     Sleep(500);
	
    }
	printf("\naperte enter duas vezes para continuar\n");
	getchar();
    getchar();
    system("cls");

	
		printf("primeiro jogador escolha o nome do seu personagen:\n  ");
		scanf("%s", jogador1);
		printf("jogador 1 seu nome e: %s\n", jogador1  );
		printf("segundo jogador escolha o nome do seu personagen:\n  ");
		scanf("%s", jogador2);
		printf("jogador 2 seu nome e: %s\n", jogador2 );

		srand(time(NULL));
		botao = (rand() % 5) + 1;
		cobra = (rand() % 5) + 1;
		
		 while(cobra == botao) {
        cobra = (rand() % 5) + 1;

   		 }

		printf("o jogo vai comeca\n");
		printf("pode comeca %s\n", jogador1);
		while(vivo){
		printf("escolha uma das caixs numeradas abaixo\n");
		printf("1 - [] 2 - [] 3 - [] 4 - [] 5 - []\n");
		scanf("%d", &escolha);
	
		if(escolha==botao){
			printf("vc achou o botao PARABENS!%s\n",jogador1);
			vivo = 0;
		}
		 else if(escolha==cobra){	
		printf("vc achou uma cobra PARABENS! vc tmb morreu %s\n ", jogador1);

		printf("vc ganhou o jogo %s", jogador2);
		vivo = 0;
		}	
		else{
		printf("\nvc nao achou o botao %s\n", jogador1);
		
		printf("e a sua vez %s\n", jogador2);
		printf("escolha uma das caixs numeradas abaixo\n");
		printf("1 - [] 2 - [] 3 - [] 4 - [] 5 - []\n");
		scanf("%d", &escolha);

		if(escolha==botao){

		printf("vc achou o botao PARABENS!%s\n",jogador2);
		vivo = 0;
		}
		 else if(escolha==cobra){
		printf("vc achou uma cobra PARABENS! vc tmb morreu %s\n ", jogador2);
		printf("jogador 1 ganhou o jogo %s\n", jogador1);
		vivo = 0;

		printf("vc quer jogar denovo ir pro proximo jogo ir pro jogo anterior sair ou voltar pro menu?\n");
		printf("1 - sim\n 2 - proximo jogo\n 3 - jogo anterior\n 4 - nao\n 5 - menu\n");
		scanf("%d", &op);
		}
		else{
		printf("vc nao achou o botao %s\n", jogador2);
		printf("e a sua vez %s\n", jogador1);
			}
		}	
	}

	printf("vc quer jogar denovo ir pro proximo jogo ir pro jogo anterior sair ou voltar pro menu?\n");
	printf("1 - sim\n 2 - proximo jogo\n 3 - jogo anterior\n 4 - nao\n 5 - menu\n");
	scanf("%d", &op);
	
	switch(op){
	
	case 1:
	jogo_da_cobra_la_ele();	
	break;
	
	case 2:
		Gousmas_War();
	break;

	case 3:
	jogo_das_perguntas();
	break;

	case 4:
	op == 3;
		printf("Obrigado por jogar! Ate a proxima!\n");
		exit(0);
		break;
	case 5:
	op == 4;
		system("cls");
		main();
		break;
	default:
		printf("Opcao invalida.\n voce vai ser direcionado para o proximo jogo.\n");
		Gousmas_War();
		}	
	}	
void Gousmas_War();
void Gousmas_War(){
	printf("        +--------------------+\n");
	printf("        |   TERCEIRO JOGO    |\n");
	printf("        +--------------------+\n");

	printf("Neste jogo de estrategia, dois jogadores controlam criaturas chamadas\nGousmas. Cada Gousma tem um valor inteiro chamado furia.\n");
	getchar();
	getchar();
	system("cls");
	printf("Carregando");
	 for(int i = 0; i < 3; i++) {
	 printf(".");
	 fflush(stdout);
	 Sleep(500);
	
	}
int gousmas [2][2] = {{1, 1} , {1 , 1}};
int decisao, mudanca, alvo, furia;
int player = 0;
while(true){
	int outroplayer = 1 - player;
	printf("\n turno do player %d \n", player + 1);
	printf("Suas gousmas [gousmas 1: %d] [gousmas 2: %d] \n ", gousmas[player][0], gousmas[player][1]);
	printf("Gousmas adversaria [gousmas 1: %d] [gousmas 2: %d] \n", gousmas[outroplayer][0], gousmas[outroplayer][1]);
	printf("1 - Ataque | 2 - Divisao:  ");
	scanf("%d", &decisao);
	if(decisao == 1){
		printf("Qual gousmas aliadas ira atacar (A primeira ou a segunda)? ");
		scanf("%d", &decisao);
		decisao--;

		if(gousmas[player][decisao] > 0){
			printf("Qual das Gousmas adversarias ira atacar (Primeira ou Segunda)?");
			scanf("%d", &alvo);
			alvo--;

			if(gousmas[outroplayer][alvo] > 0){
				gousmas[outroplayer][alvo] += gousmas[player][decisao];
				printf("Voce atacou o inimigo! A furia dele agora e %d.\n", gousmas[outroplayer][alvo]);
	
				if(gousmas[outroplayer][alvo] > 5){
					printf("A Gousmas do inimigo foi desintegrada!\n");
						gousmas[outroplayer][alvo] = 0;
				}
			}
		}
	}	
							
	else if (decisao == 2){
		printf("Qual gousmas deseja dividir (A Primeira ou a Segunda)?");
		scanf("%d", &decisao);
		decisao--;
		mudanca = 1 - decisao;

		if(gousmas[player][decisao] > 1 && gousmas[player][decisao] >= 0){
			printf("Qual a quantidade de furia que sera transferida (De 1 a %d)?", gousmas[player][decisao] - 1);
			scanf("%d", &furia);
			gousmas[player][decisao] -= furia;
			gousmas[player][mudanca] += furia;
			printf("Furia foi dividida\n");

		}

			else{
				printf("Nao e possivel dividir a furia (Furia Insuficiente ou Espaco Ocupado)\n");
				continue;

			}
	}
							
	if(gousmas[outroplayer][0] == 0 && gousmas[outroplayer][1] == 0){
		printf("\n O PLAYER %d VENCEU!!!!\n", player + 1);
		break;
	}	
							
		player = outroplayer;
						
	}
						
	printf("decisao!\n1: Jogar de novo\n0: Voltar para o Menu\n");
        scanf("%d", &decisao);
        system("cls");
		 while (decisao == 1);
	
} 