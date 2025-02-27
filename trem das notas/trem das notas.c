#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
float *nota[];
int numA;
bool error;
int main(){
    float maior = 0;
    float menor = 100;
    float soma = 0;
    printf("\nDigite qnts alunos: ");
    scanf("%d", &numA);

    for (int i = 0; i < numA; i++){
        do{
            printf("\nDigite a nota %i:", (i + 1));
            scanf("%d", &nota[i]);
            error = nota[i] < 0 || nota [i] > 100;
            if (error){
                printf("Digite um numero de 0 a 100, seu jamal");
            }

        }while(error);
        if (maior < num[i]){
                maior = num[i];
        }
        if (menor > num[i]){
            menor = num[i];
        }
        soma += nota[i];
    }





    return 0;
}
