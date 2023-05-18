#include <stdio.h>
#include <stdlib.h>

int* somarVetores(const int* vetorA, const int* vetorB, int tamanho) {
    int* vetorC = (int*) malloc(tamanho * sizeof(int));
    if (vetorC == NULL) {
        printf("Erro ao alocar o vetor C\n");
        exit(1);
    }
    int i;
    for (i = 0; i < tamanho; i++) {
        *(vetorC + i) = *(vetorA + i) + *(vetorB + i);
    }
    return vetorC;
}

void imprimirVetor(const int* vetor, int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);
    
    int* vetorA = (int*) malloc(n * sizeof(int));
    int* vetorB = (int*) malloc(n * sizeof(int));
    
    printf("Digite os elementos do vetor A:\n");
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &vetorA[i]);
    }
    
    printf("Digite os elementos do vetor B:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &vetorB[i]);
    }
    
    int* vetorC = somarVetores(vetorA, vetorB, n);
    
    printf("Vetor C (soma de A e B):\n");
    imprimirVetor(vetorC, n);
    
    free(vetorA);
    free(vetorB);
    free(vetorC);
    
    return 0;
}