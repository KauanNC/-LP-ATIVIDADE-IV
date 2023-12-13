#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 5

struct aluno
{
    char nome[200];
    char nascimento[200];

};

float calcularMedia (float nota[])
{
	int i;
	float soma = 0, media;
	
	 for (i = 0; i < 2; i++)
	 {
	 	soma += nota[i];
	 }
	 media = soma / 2;
	 
	 return media;
}

char *validando (float media)
{
	char validando[200];
	
	if (media >= 7)
	{
		printf ("Aprovado");
	} 
	else 
	{
		printf ("Reprovado");
	}
	return validando;
}
int main()
{
    setlocale(LC_ALL, "portuguese");

    struct aluno validacao[5];
    int i, j;
	float nota[2],mediaFinal;
	
    for (i = 0; i < TAM; i++)
    {
        printf("Informe o nome do %dº aluno:", i + 1);
        gets(validacao[i].nome);
        printf("Informe a data de nascimento do %dº aluno:", i + 1);
        gets(validacao[i].nascimento);

        for (j = 0; j < 2; j++)
        {
            printf("Informe a %dº nota:", j + 1);
            scanf("%f", &nota[j]);
			
		}
    
		mediaFinal = calcularMedia(nota);  
    
    printf ("MEDIA ALUNO: %.1f\n", mediaFinal );
    printf ("\nResultado Final %s\n", validando(mediaFinal));
    printf ("\n");
    fflush(stdin);
	
	}
	return 0;
}
