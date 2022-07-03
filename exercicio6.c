/*#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

	printf("--------------------\n");
	printf("-- Exe07: Loteria --\n");
	printf("--------------------\n");

	float valorApostaAmigo1 = 0, valorApostaAmigo2 = 0, valorApostaAmigo3 = 0, valorPremio = 0;
	float valorTotalApostadoPelosAmigos = 0;

	printf("Informe o valor apostado por cada amigo...\n");
	printf("Amigo 1:");
	scanf("%f", &valorApostaAmigo1);
	printf("Amigo 2:");
	scanf("%f", &valorApostaAmigo2);
	printf("Amigo 3:");
	scanf("%f", &valorApostaAmigo3);

	valorTotalApostadoPelosAmigos = valorApostaAmigo1 + valorApostaAmigo2 + valorApostaAmigo3;

	printf("\nAgora, informe o valor do pr�mio:");
	scanf("%f", &valorPremio);

	printf("\nEntendi... Abaixo, seguem os valores que cada amigo deve receber:");
	printf("\nAmigo 1: %.2f", valorApostaAmigo1 / valorTotalApostadoPelosAmigos * valorPremio);
	printf("\nAmigo 2: %.2f", valorApostaAmigo2 / valorTotalApostadoPelosAmigos * valorPremio);
	printf("\nAmigo 3: %.2f\n", valorApostaAmigo3 / valorTotalApostadoPelosAmigos * valorPremio);

    return (0);
}

*/
