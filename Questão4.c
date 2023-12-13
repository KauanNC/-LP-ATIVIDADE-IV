#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct contaBancaria
{
    char numeroConta[200];
    char titular[200];
    float saldo, transferencia, valorDeposito;
    char tipoDeConta[200];
};

float deposito(float valorInicial, float valorDeposito)
{
    return valorInicial + valorDeposito;
}

float saque(float valorInicial, float valorDeposito)
{
    return valorInicial - valorDeposito;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    float depositoAtualizado, saqueAtualizado;
	int opcao;

    struct contaBancaria dados;

    do
    {
        printf("\nOP��ES DO QUE VOC� PODE ESTAR REALIZANDO\n");
        printf("1- Registro de conta \n2- Deposito \n3- Saque \n4-Sair do programa\n ");
        printf("Informe a op��o desejada:") /
    	scanf("%d", &opcao);

        system("clear||cls");

        switch (opcao)
        {
        case 1:
            fflush(stdin);

            printf("Nome do titular: ");
            gets(dados.titular);

            printf("N�mero da conta: ");
            gets(dados.numeroConta);

            printf("Tipo de conta desejada: ");
            gets(dados.tipoDeConta);

            printf("Qual saldo ter� na conta: ");
            scanf("%f", &dados.saldo);
            break;

        case 2:

            printf("Quantia do deposito: ");
            scanf("%f", &dados.valorDeposito);

            depositoAtualizado = deposito(dados.saldo, dados.valorDeposito);

            printf("Nome do titular: %s\n", dados.titular);
            printf("N�mero da conta: %s\n", dados.numeroConta);
            printf("Tipo da conta: %s\n", dados.tipoDeConta);
            printf("Saldo pr�-dep�sito: %.2f\n", dados.saldo);
            printf("Saldo atual da conta: %.2f\n", depositoAtualizado);
            break;

        case 3:
            printf("Quanto voc� deseja sacar: ");
            scanf("%f", &dados.transferencia);

            saqueAtualizado = saque(dados.saldo, dados.transferencia);

            printf("Nome do titular: %s\n", dados.titular);
            printf("N�mero da conta: %s\n", dados.numeroConta);
            printf("Tipo da conta: %s\n", dados.tipoDeConta);
            printf("Saldo pr�-saque: %.2f\n", dados.saldo);
            printf("Saldo atual da conta: %.2f\n", saqueAtualizado);
            break;

        default:
            break;
        }

    } while (opcao != 0);

    return 0;
}
