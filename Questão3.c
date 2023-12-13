#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct produto {
  char nome[200];
  float preco;
  int estoque;
};

void atualizarEstoque(int *quantidadeEstoque, float preco, int quantidadeProduto) {
  *quantidadeEstoque -= quantidadeProduto;
  printf("Quantidade atual no estoque: %d\n", *quantidadeEstoque);
  printf("Preço total em estoque: %f\n", *quantidadeEstoque * preco);
}

int main() {
  setlocale(LC_ALL, "portuguese");
  int opcao, escolha, quantidadeDesejada;
  struct produto cadastro;

  printf("Deseja cadastrar algum produto?\n");
  printf("1 - SIM \n2 - NÃO\n");
  printf("Informe a opção desejada:");
  scanf("%d", &escolha);

  system("clear||cls");

  switch (escolha) {
    case 1:
      printf("Informe o nome do produto:");
      scanf("%s", cadastro.nome);
      printf("Informe o valor do produto: ");
      scanf("%f", &cadastro.preco);
      printf("Informe a quantidade no estoque:");
      scanf("%d", &cadastro.estoque);
      break;
    default:
      break;
  }

  do {
    printf("===== OPÇÕES DISPONÍVEIS =====\n");
    printf("1 - Realizar uma compra\n2 - Consultar estoque\n3 - Sair do programa\n");
    printf("===============================\n");
    printf("Informe a opção desejada:");
    scanf("%d", &opcao);

    system("clear||cls");

    switch (opcao) {
      case 1:
        printf("Nome do produto: %s\n", cadastro.nome);
        printf("Digite a quantidade desejada: ");
        scanf("%d", &quantidadeDesejada);
        printf("Preço total em estoque: %f\n", cadastro.estoque * cadastro.preco);
        break;
      case 2:
        printf("Nome do produto: %s\n", cadastro.nome);
        printf("Quantidade em estoque: %d\n", cadastro.estoque);
        printf("Preço do produto: %f\n", cadastro.preco);
        break;
      default:
        break;
    }

  } while (opcao != 3);

  return 0;
}
