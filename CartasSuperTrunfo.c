#include <stdio.h>
int main(){
	char estado;
	char codigoC[2];
	char Ncidade[10];
	unsigned long int populacao;
	float areakm;
	float PIB;
	int pontotu;
	char estado1;
	char codigoC1[2];
	char Ncidade1[10];
	unsigned long int populacao1;
	float areakm1;
	float PIB1;
	int pontotu1;
	float calculoDP;
	float calculoPP;
    float calculoDP1;
	float calculoPP1;
	float superpoder;
	float superpoder1;
	float Calculodensidademenor;
	float Calculodensidademenor1;
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
	scanf("%lu", &populacao);
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
	superpoder = (float)populacao + areakm + PIB + pontotu + calculoPP + (1/calculoDP);
	Calculodensidademenor = 1/calculoDP;
	
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
	scanf("%lu", &populacao1);

	printf("Informe a area da cidade em quilometros quadrados: ");
	scanf("%f", &areakm1);

	printf("Informe o Produto Interno Bruto da cidade (PIB): ");
	scanf("%f", &PIB1);

	printf("Informe o numero de Pontos Tuisticos: ");
	scanf("%d", &pontotu1);
	calculoDP1 = populacao1 / areakm1;
	calculoPP1 = PIB1 / populacao1;
	superpoder1 = (float)populacao1 + areakm1 + PIB1 + pontotu1 + calculoPP1 + (1/calculoDP1);
	Calculodensidademenor1 = 1/calculoDP1;
	//Mostrar resultados
	printf("Carta 1:\nEstado: %c\ncodigo: %c%s\nNome da Cidade: %s\nPopulacao: %lu\nArea: %.2f\nPIB: %.2f\nNumero de Pontos Turisticos: %d\n", estado, estado, codigoC , Ncidade, populacao, areakm, PIB, pontotu);
	printf("--\n");
    printf("Carta 2:\nEstado: %c\ncodigo: %c%s\nNome da Cidade: %s\nPopulacao: %lu\nArea: %.2f\nPIB: %.2f\nNumero de Pontos Turisticos: %d\n", estado1, estado1, codigoC1, Ncidade1, populacao1, areakm1, PIB1, pontotu1);
	printf("Carta 1 a Densidade Populacional e: %.2f hab/km²\n", calculoDP);
	printf("Carta 2 a Densidade Populacional e: %.2f hab/km²\n", calculoDP1);
	printf("Carta 1 PIB per Capita: %.2f reais\n", calculoPP);
	printf("Carta 2 PIB per Capita: %.2f reais\n", calculoPP1);
	printf("Super poder CARTA 1: %.2f\n", superpoder);
	printf("Super poder CARTA 2: %.2f\n", superpoder1);
	//Comparaçao das cartas
	printf("--\n");
	printf("Comparacao de Cartas: se mostrar 1 Carta 1 venceu Se aparecer 0 Carta 2 venceu. \n");
	printf("Populacao: %d\n", populacao > populacao1);
	printf("Area: %d\n", areakm > areakm1);
	printf("PIB: %d\n", PIB > PIB1);
	printf("Pontos Turisticos: %d\n", pontotu > pontotu1);
	printf("Densidade Populacional: %d\n", Calculodensidademenor > Calculodensidademenor1);
	printf("PIB per Capita: %d\n", calculoPP > calculoPP1);
	printf("Super Poder: %d", superpoder > superpoder1);
	
	return 0;
	
	
	
	
	
}