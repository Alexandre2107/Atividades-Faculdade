#include <stdio.h>

int main()
{
    int numeroFuncionario, numeroHoras;
    float valorPorHora, salario;

    scanf("%d", &numeroFuncionario);
    scanf("%d", &numeroHoras);
    scanf("%f", &valorPorHora);

    salario = (numeroHoras * valorPorHora);
    printf("NUMERO = %d\n", numeroFuncionario);
    printf("SALARIO = R$ %.2f", salario);

    return 0;
}