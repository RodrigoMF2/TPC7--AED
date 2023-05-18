#include <stdio.h>
#include <stdlib.h>

//ler um valor N nao negativo
int ler_int()
{
    int n;
    do
    {
        printf("Digite o valor inteiro nao negativo:");
        scanf("%d", &n);
    } while (n < 0);
    return n;
}

//alocar a memoria em vetor de inteiros
int* alocarVetor(int tamanho){
    int* vetor = (int*) malloc (tamanho * sizeof(int));
    if(vetor == NULL){
        printf("Erro ao alocar o vetor\n");
        exit(1);
    }
    return vetor;
}

// Função para ler um vetor V contendo N posições de inteiros
void lerVetor(int* vetor, int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        do {
            printf("Digite o valor para a posicao %d (deve ser maior ou igual a 2): ", i);
            scanf("%d", &vetor[i]);
        } while (vetor[i] < 2);
    }
}

// Função para imprimir um vetor V contendo N posições de inteiros
void imprimirVetor(int* vetor, int tamanho) {
    int i;
    printf("Vetor lido:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d\n", vetor[i]);
    }
}

int main() {
    int n;
    n = ler_int();
    int* vetor = alocarVetor(n);
    lerVetor(vetor, n);
    imprimirVetor(vetor, n);
    free(vetor);
    return 0;
}
    

