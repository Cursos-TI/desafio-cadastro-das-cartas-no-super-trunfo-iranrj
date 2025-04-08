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
	//Carta N1 Pegando informaçoes
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
	//printf("Tem %d pontos turisticos.", pontotu);
	
	//CARTA N2 Pegando informaçoes
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
	//Mostrar resultados
	printf("Carta 1:\nEstado: %c\ncodigo: %c%s\nNome da Cidade: %s\nPopulação: %d\nArea: %.3f\nPIB: %.3f\nNumero de Pontos Turisticos: %d\n", estado, estado, codigoC, Ncidade, populacao, areakm, PIB, pontotu);
	printf("--\n");
        printf("Carta 2:\nEstado: %c\ncodigo: %c%s\nNome da Cidade: %s\nPopulação: %d\nArea: %.3f\nPIB: %.3f\nNumero de Pontos Turisticos: %d", estado1, estado1, codigoC1, Ncidade1, populacao1, areakm1, PIB1, pontotu1);
	
        return 0;
	
}
