#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor1[10], vetor2[10], vetor3[20];
    int i, j=0;

    //Entrada dos valores nos vetores 1 e 2
    for ( i = 0; i < 10; i++)
    {
        printf("Digite o %d-ésimo elemento do vetor 1: ",i+1);
        scanf("%d", &vetor1[i]);
        vetor3[j] = vetor1[i];
        j+=2;
    }

    j=1;
    for ( i = 0; i < 10; i++)
    {
        printf("Digite o %d-ésimo elemento do vetor 1: ",i+1);
        scanf("%d", &vetor2[i]);
        vetor3[j] = vetor2[i];
        j+=2;
    }

    printf("Elementos d vetor C: \n");
    //Impressão dos elementos do vetor C
    for ( i = 0; i < 20; i++)
    {
        printf("%d ", vetor3[i]);
        }
        printf("\n");
    return 0;
}