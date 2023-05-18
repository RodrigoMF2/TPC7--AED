#include <stdio.h>
#include <stdlib.h>

//ler do usuario o tamanho de um vetor a se lido
int lerTamanhoVetor(){
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    return tamanho;

}

//fazer a alocaçao dinamica desse vetor
int* alocarVetor(int n){
    int* vetor = (int*) malloc(n * sizeof(int));
    if(vetor == NULL){
        printf("Erro ao alocar o vetor\n");
        exit(1);
    }
    return vetor;
}

// Ler o vetor do usuário 
void lerVetor(int* vetor, int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
}
//imprimir o vetor do usuario
void imprimirVetor(int* vetor, int tamanho) {
    int i;
    printf("Vetor lido:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d\n", vetor[i]);
    }
}

int main() {
    int tamanho;
    tamanho = lerTamanhoVetor();
    int* vetor = alocarVetor(tamanho);
    lerVetor(vetor, tamanho);
    imprimirVetor(vetor, tamanho);
    free(vetor);
    return 0;
}






