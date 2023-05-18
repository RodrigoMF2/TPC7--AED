#include <stdio.h>
#include <stdlib.h>

int main(){

    //receber 20 elementos inteiros em um vertor
    int vet[20];
    int i;
    int maior,menor,iguais,posicao;
    
    //Entrda do valores no vetor
    for(i = 0;i<20;i++){
        printf("Digite o %d numero: ",i);
        scanf("%d",&vet[i]);
    }

    //maior e menor elemento de um vetor e se os elementos forem iguais morte a posiçao da primeira ocorrencia
    
    maior = vet[0];
    menor = vet[0];
    iguais = 0;
    posicao = 0;
    for(i = 0;i<20;i++){
        if(vet[i] > maior){
            maior = vet[i];
            }
            if(vet[i] < menor){
                menor = vet[i];
                }
                if(vet[i] == maior){
                    iguais++;
                    }
                    if(vet[i] == menor){
                        iguais++;
                        }
                        if(iguais == 2){
                            posicao = i;
                            }
        }
        //saida dos valores
        printf("Maior numero: %d\n",maior);
        printf("Menor numero: %d\n",menor);
        printf("Numeros iguais: %d\n",iguais);
        printf("Posicao dos numeros iguais: %d\n",posicao);
    
    }


