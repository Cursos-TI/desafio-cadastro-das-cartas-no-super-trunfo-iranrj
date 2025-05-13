#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	// Atributos principais
	char estado, codigoC[2], Ncidade[10];
	char estado1, codigoC1[2], Ncidade1[10];
	float populacao, populacao1;
	float areakm, areakm1;
	float PIB, PIB1;
	int pontotu, pontotu1;
	// Variáveis para cálculos
	float calculoDP, calculoDP1, calculoPP, calculoPP1;// Densidade populacional, PIB per capita
	float superpoder, superpoder1;// Superpoder da carta
	float Calculodensidademenor, Calculodensidademenor1;
	// Opções do menu e comparação
	int opcao[2], comparacao, resultado;
	
	
	
	
	// Entrada dos dados da Carta 1
	printf("Carta 1:\n");
	
	printf("Estado - Uma letra de 'A' a 'H': ");
	scanf(" %c", &estado);
	
	printf("Informe o Codigo da Carta: ");
	scanf("%s", &codigoC);
	
	printf("Informe o nome da Cidade (COLOCAR TUDO JUNTO EX: SAOPAULO): ");
	scanf("%s", &Ncidade);
	
	printf("Informe a quantidade populacional: ");
	scanf("%f", &populacao);
	
	printf("Informe a area da cidade em quilometros quadrados: ");
	scanf("%f", &areakm);
	
	printf("Informe o Produto Interno Bruto da cidade (PIB): ");
	scanf("%f", &PIB);
	
	printf("Informe o numero de Pontos Tuisticos: ");
	scanf("%d", &pontotu);
	// Cálculos derivados carta 1
	calculoDP = populacao / areakm;
	calculoPP = PIB / populacao;
	superpoder = populacao + areakm + PIB + pontotu + calculoPP + (1/calculoDP);
	Calculodensidademenor = 1/calculoDP;
	
	
	// Entrada dos dados da Carta 2
	printf("Carta 2:\n");
	
	printf("Estado - Uma letra de 'A' a 'H': ");
	scanf(" %c", &estado1);

	printf("Informe o Codigo da Carta: ");
	scanf("%s", &codigoC1);

	printf("Informe o nome da Cidade (COLOCAR TUDO JUNTO EX: SAOPAULO): ");
	scanf("%s", &Ncidade1);

	printf("Informe a quantidade populacional: ");
	scanf("%f", &populacao1);

	printf("Informe a area da cidade em quilometros quadrados: ");
	scanf("%f", &areakm1);

	printf("Informe o Produto Interno Bruto da cidade (PIB): ");
	scanf("%f", &PIB1);

	printf("Informe o numero de Pontos Tuisticos: ");
	scanf("%d", &pontotu1);
	// Cálculos derivados carta 2
	calculoDP1 = populacao1 / areakm1;
	calculoPP1 = PIB1 / populacao1;
	superpoder1 = populacao1 + areakm1 + PIB1 + pontotu1 + calculoPP1 + (1/calculoDP1);
	Calculodensidademenor1 = 1/calculoDP1;
	
	// MENU DE ESCOLHA
	printf("----\n");
	printf("Bem vindo ao jogo.\n");
	printf("Escolha qual atributo vai batalhar.\n");
	printf("1. Populacao.\n");
	printf("2. Area em km.\n");
	printf("3. PIB.\n");
	printf("4. Pontos Turisticos.\n");
	printf("5. Densidade Populacional.\n");
	printf("6. PIB Per Capita.\n");
	printf("7. Super poder.\n");
	printf("Escolha uma opcao: ");
	scanf("%d", &opcao[0]);
	
	// Comparação baseada na escolha do usuário

	switch(opcao[0]){
	case 1:
		if(populacao == populacao1){ 
			printf("EMPATE!\n");
		}else if(populacao > populacao1){
			printf("Carta 1 venceu!\n");
		}else{
			printf("Carta 2 venceu!\n");
		}
	break;
	case 2:
		if(areakm == areakm1){
			printf("EMPATE!\n");
		}else if(areakm > areakm1){
			printf("Carta 1 venceu!\n");
		}else{
			printf("Carta 2 venceu!\n");
		}
	break;
	case 3:
		if(PIB == PIB1){
			printf("EMPATE!\n");
		}else if(PIB > PIB1){
			printf("Carta 1 venceu!\n");
		}else{
			printf("Carta 2 venceu!\n");
		}
	break;
	case 4:
		if(pontotu == pontotu1){
			printf("EMPATE!\n");
		}else if(pontotu > pontotu1){
			printf("Carta 1 venceu!\n");
		}else{
			printf("Carta 2 venceu!\n");
		}
	break;
	case 5:
		if(calculoDP == calculoDP1){
			printf("EMPATE!\n");
		}else if(calculoDP < calculoDP1){
			printf("Carta 1 venceu!\n");
		}else{
			printf("Carta 2 venceu!\n");
		}
	break;
	case 6:
		if(calculoPP == calculoPP1){
			printf("EMPATE!\n");
		}else if(calculoPP > calculoPP1){
			printf("Carta 1 venceu!\n");
		}else{
			printf("Carta 2 venceu!\n");
		}
	break;
	case 7:
		if(superpoder == superpoder1){
			printf("EMPATE!\n");
		}else if(superpoder > superpoder1){
			printf("Carta 1 venceu!\n");
		}else{
			printf("Carta 2 venceu!\n");
		}
	break;
	default:
		printf("Opcao incorreta.\n");
	}
	
	printf("---\n");
	
	// Submenu de comparação ou informações
	
	printf("Segunda Batalha\n");
	printf("1. Comparacao das cartas vencedoras\n");
	printf("2. Informacoes de todas as cartas\n");
	printf("3. Sair\n");
	printf("Escolha uma opcao: ");
	scanf("%d", &opcao[1]);
	
	
	switch (opcao[1]){
	case 1:
		printf("-- Comparando Cartas --\n-- Escolha qual informacao quer comaprar: \n");
		printf("1. Populacao.\n");
		printf("2. Area em km.\n");
		printf("3. PIB.\n");
		printf("4. Pontos Turisticos.\n");
		printf("5. Densidade Populacional.\n");
		printf("6. PIB Per Capita.\n");
		printf("7. Super poder.\n");
		printf("8. Sair.\n");
		printf("Escolha qual quer comparar: ");
		scanf("%d", &comparacao);
		if (opcao[0] == comparacao){ // Impede comparação repetida com o atributo anterior
			printf("Opcao Repetida.\n");
		}else{
			switch (comparacao){
			case 1:
				if(populacao == populacao1){
					printf("EMPATE!");
				}else if(populacao > populacao1){
					printf("Carta 1 venceu!");
				}else{
					printf("Carta 2 venceu!");
				}
			break;
			case 2:
				if(areakm == areakm1){
					printf("EMPATE!");
				}else if(areakm > areakm1){
					printf("Carta 1 venceu!");
				}else{
					printf("Carta 2 venceu!");
				}
			break;
			case 3:
				if(PIB == PIB1){
					printf("EMPATE!");
				}else if(PIB > PIB1){
					printf("Carta 1 venceu!");
				}else{
					printf("Carta 2 venceu!");
				}
			break;
			case 4:
				if(pontotu == pontotu1){
					printf("EMPATE!");
				}else if(pontotu > pontotu1){
					printf("Carta 1 venceu!");
				}else{
					printf("Carta 2 venceu!");
				}
			break;
			case 5:
				if(calculoDP == calculoDP1){
					printf("EMPATE!");
				}else if(calculoDP < calculoDP1){
					printf("Carta 1 venceu!");
				}else{
					printf("Carta 2 venceu!");
				}
			break;
			case 6:
				if(calculoPP == calculoPP1){
					printf("EMPATE!");
				}else if(calculoPP > calculoPP1){
					printf("Carta 1 venceu!");
				}else{
					printf("Carta 2 venceu!");
				}
			break;
			case 7:
				if(superpoder == superpoder1){
					printf("EMPATE!");
				}else if(superpoder > superpoder1){
					printf("Carta 1 venceu!");
				}else{
					printf("Carta 2 venceu!");
				}
			break;
			case 8:
				printf("Saindo....");
			break;
			default:
				printf("Opcao incorreta");
			}
			}
	break;
	case 2: 
		printf("INFORMAÇAO DAS CARTAS:\n"); // Impressão das informações das cartas
		printf("Carta 1:\nEstado: %c\ncodigo: %c%s\nNome da Cidade: %s\nPopulacao: %.2f\nArea: %.2f\nPIB: %.2f\nNumero de Pontos Turisticos: %d\n", estado, estado, codigoC , Ncidade, populacao, areakm, PIB, pontotu);
		printf("Carta 1 a Densidade Populacional e: %.2f hab/km\n", calculoDP);
		printf("Super poder CARTA 1: %.2f\n", superpoder);
		printf("Carta 1 PIB per Capita: %.2f reais\n", calculoPP);
		printf("--\n");
    	printf("Carta 2:\nEstado: %c\ncodigo: %c%s\nNome da Cidade: %s\nPopulacao: %.2f\nArea: %.2f\nPIB: %.2f\nNumero de Pontos Turisticos: %d\n", estado1, estado1, codigoC1, Ncidade1, populacao1, areakm1, PIB1, pontotu1);
		printf("Carta 2 a Densidade Populacional e: %.2f hab/km\n", calculoDP1);
		printf("Carta 2 PIB per Capita: %.2f reais\n", calculoPP1);
		printf("Super poder CARTA 2: %.2f\n", superpoder1);

		printf("--\n");
		printf("Populacao carta 1: %.2f\nPopulacao carta 2: %.2f\n", populacao, populacao1);
	break;
	case 3:
		printf("Saindo...");
	default:
		printf("opcao incorreta");
	}

	
}