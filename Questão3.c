#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

    struct produto
    {
        char nome[200], preco[200];
        int estoque;
    };

    int atualizarEstoque()
    {
    	return;
    }
    int main()
    {
        setlocale(LC_ALL, "portuguese");
        int opcao, escolha;
		
		struct produto cadastro;
		
		printf ("Deseja estar cadastrando algum produto?");
		printf ("1-SIM \t 2-NAO");
		printf ("Informe a opcao desejada:");
		scanf ("%d", &cadastro.escolha);
		
		system("clear||cls");
		switch (escolha)
		{
			case 1:
				printf ("Informe o nome do produto:");
				gets (cadastro.nome);
				printf ("Informe o valor do produto: ");
				gets (cadastro.preco);
				printf ("Informe a quantidade no estoque:");
				scanf ("%d", &cadastro.estoque);
				break;
	
			default:
				break;
		}
	 
	    do
        {
            printf("=====OPÇÕES DISPONÍVEIS=====");
            printf("\n1 - Realizar uma compra \n2 - Consultar estoque \n3 - Sair do programa. ");
            printf("\n============================\n");
            printf("\n Informe a opção desejada:");
            scanf ("%d", &opcao);
        } while (opcao != 0);
        return 0;
    }
