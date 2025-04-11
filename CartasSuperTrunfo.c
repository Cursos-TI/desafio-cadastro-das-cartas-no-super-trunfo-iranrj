#include <stdio.h>
int main(){
	char estado;
	char codigoC[2];
	char Ncidade[10];
	int populacao;
	float areakm;
	float PIB;
	int pontotu;
	char estado1;
	char codigoC1[2];
	char Ncidade1[10];
	int populacao1;
	float areakm1;
	float PIB1;
	int pontotu1;
	float calculoDP;
	float calculoPP;
    float calculoDP1;
	float calculoPP1;
	//Carta N1
	printf("Carta 1:\n");
	
	printf("Estado - Uma letra de 'A' a 'H': ");
	scanf(" %c", &estado);
	//printf("%c", estado);
	printf("Informe o Codigo da Carta: ");
	scanf("%s", &codigoC);
	//printf("O codigo da carta e: %c%s",estado , codigoC);
	printf("Informe o nome da Cidade (COLOCAR TUDO JUNTO EX: SAOPAULO): ");
	scanf("%s", &Ncidade);
	//printf("Nome da cidade e: %s", Ncidade);
	printf("Informe a quantidade populacional: ");
	scanf("%d", &populacao);
	//printf("Quantidade populacional e: %d", populacao);
	printf("Informe a area da cidade em quilometros quadrados: ");
	scanf("%f", &areakm);
	//printf("A area e: %.3f", areakm);
	printf("Informe o Produto Interno Bruto da cidade (PIB): ");
	scanf("%f", &PIB);
	//printf("O PIB e : %.3f", PIB);
	printf("Informe o numero de Pontos Tuisticos: ");
	scanf("%d", &pontotu);
	calculoDP = populacao / areakm;
	calculoPP = PIB / populacao;
	
	//printf("Tem %d pontos turisticos.", pontotu);
	
	//CARTA N2
	printf("Carta 2:\n");
	
	printf("Estado - Uma letra de 'A' a 'H': ");
	scanf(" %c", &estado1);

	printf("Informe o Codigo da Carta: ");
	scanf("%s", &codigoC1);

	printf("Informe o nome da Cidade (COLOCAR TUDO JUNTO EX: SAOPAULO): ");
	scanf("%s", &Ncidade1);

	printf("Informe a quantidade populacional: ");
	scanf("%d", &populacao1);

	printf("Informe a area da cidade em quilometros quadrados: ");
	scanf("%f", &areakm1);

	printf("Informe o Produto Interno Bruto da cidade (PIB): ");
	scanf("%f", &PIB1);

	printf("Informe o numero de Pontos Tuisticos: ");
	scanf("%d", &pontotu1);
	calculoDP1 = populacao1 / areakm1;
	calculoPP1 = PIB1 / populacao1;
	//Mostrar resultados
	printf("Carta 1:\nEstado: %c\ncodigo: %c%s\nNome da Cidade: %s\nPopulação: %d\nArea: %.3f\nPIB: %.3f\nNumero de Pontos Turisticos: %d\n", estado, estado, codigoC , Ncidade, populacao, areakm, PIB, pontotu);
	printf("--\n");
    printf("Carta 2:\nEstado: %c\ncodigo: %c%s\nNome da Cidade: %s\nPopulação: %d\nArea: %.3f\nPIB: %.3f\nNumero de Pontos Turisticos: %d\n", estado1, estado1, codigoC1, Ncidade1, populacao1, areakm1, PIB1, pontotu1);
	printf("Carta 1 a Densidade Populacional e: %.2f hab/km²\n", calculoDP);
	printf("Carta 2 a Densidade Populacional e: %.2f hab/km²\n", calculoDP1);
	printf("Carta 1 PIB per Capita: %.2f reais\n", calculoPP);
	printf("Carta 2 PIB per Capita: %.2f reais", calculoPP1);
	
	return 0;
	
}