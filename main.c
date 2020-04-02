#include <stdio.h>
#include <stdlib.h>

#define TAM 5


int main()
{
    int vet_A[TAM];
    int i, somaPar=0, somaImpar=0, somaTotal, percentual;
    float contador=0;

    //preenchimento do vetor
    for (i=0; i<TAM; i++){
        printf("Digite o valor da posicao %d\n", i+1);
        scanf("%d", &vet_A[i]);
    }

    //verificação do vetor
    /*for (i=0; i<TAM; i++){
        printf("%d, ", vet[i]);
    }*/
    //Fazendo a soma dos numeros pares e impares
    for (i=0; i<TAM; i++){
        if (vet_A[i] % 2 == 0){
            somaPar+= vet_A[i];
        }
        else{
            somaImpar+= vet_A[i];
            contador++;
        }
    }
    //calculo da Soma e do percentual
    somaTotal = somaImpar + somaPar;
    percentual = (contador / TAM) * 100;

    //imprime os resultados
    printf("Somatoria dos Pares: %d\n", somaPar);
    printf("Somatoria dos Impares: %d\n", somaImpar);
    printf("Somatoria Total: %d\n", somaTotal);
    printf("percentual de impares em relacao aos pares: %d \n", percentual);

    return 0;
}
