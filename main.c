#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float somar(float num1, float num2){
    return num1 + num2;
}
float subtrair(float num1, float num2){
    return num1 - num2;
}
float dividir(float num1, float num2){
    return num1 / num2;
}
float multiplicar(float num1, float num2){
    return num1 * num2;
}
float calcularPorcentagem(float num1, float num2){
    return (num1 * num2) / 100;
}

int main()
{

    int opcao;
    float num1, num2, resultado;

    printf("\n Calculadora");
    printf("\n------------------------\n");
    printf("\n Digite o numero 1:");
    scanf("%f", &num1);
    printf("\n Digite o numero 2:");
    scanf("%f", &num2);
    printf("\n------------------------\n");
    printf("\n 1.Somar");
    printf("\n 2.Subtrair");
    printf("\n 3.Dividir");
    printf("\n 4.Multiplicar");
    printf("\n 5.Calcular Porcentagem:\n");
    printf("\n Digite a opcao desejada:");
    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:
            resultado = somar(num1, num2);
            break;
        case 2:
            resultado = subtrair(num1, num2);
            break;
        case 3:
            resultado = multiplicar(num1, num2);
            break;
        case 4:
            if(num2 == 0)
            {
                printf("\n Nao e possivel dividir por 0");
            }
            else
            {
                resultado = dividir(num1, num2);
            }
            break;
        case 5:
            resultado = calcularPorcentagem(num1, num2);
            break;
        default:
            printf("\n Opcao invalida!");
            break;
    }
    printf("\n-------------------------------------------------\n");
    printf("\n Resultado: %.2f", resultado);

    return 0;
}
