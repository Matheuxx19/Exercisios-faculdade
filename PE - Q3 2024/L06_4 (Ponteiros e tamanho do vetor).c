/*Verificar o tamanho de um vetor a partir da diferença entre o endereço do primeiro e do último elemento. Compare com o resultado obtido pela função sizeof. Para este exemplo, considere um vetor de 10 elementos.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[10];
    printf("O número de elementos usando ponteiros é %d.\n",*(&vetor+1)-*(&vetor));
    printf("O número de elementos usando sizeof é %d.\n",sizeof(vetor)/sizeof(int));
    return 0;
}
