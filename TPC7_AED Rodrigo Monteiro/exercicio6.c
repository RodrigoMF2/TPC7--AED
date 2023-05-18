#include <stdio.h>
#include <stdlib.h>

int* alocarvetor(int tamanho){
    int* vetor = (int*) malloc (tamanho *sizeof(int));
    if(vetor == NULL){
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }
    for (int i = 0; i < tamanho; i++){
        vetor[i] = i;

    }
return vetor;
}

int main(){
    int n;
    printf("digite o tamanho do vetor: ");
        scanf("%d", &n);

    int* vetor = alocarvetor(n);
    printf("Vetor preenchido:\n");
   
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    
    free(vetor);
    
    return 0;
}

