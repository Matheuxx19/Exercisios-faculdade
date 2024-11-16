/* Exercício 4 - Crie um programa que armazene o resultado de uma  operação aritmética em uma união "value". O programa principal deve pedir que sejam digitados os operandos inteiros x e y. A opção da operação também deve ser digitada, sendo 1-Adição, 2-Subtração, 3-Multiplicação e 4-Divisão. Para adição, subtração e multiplicação, o resultado é armazenado como inteiro na união. Para a divisão, o resultado é armazenado como um vetor de 2 posições, sendo 1 inteiro para o quociente e 1 inteiro para o resto. Ainda para a divisão, caso o divisor for 0, o resultado é armazenado como a string "Erro". O resultado deve então ser exibido em uma mensagem. 
Utilize a união: union value{ ... }; */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union value{
    int resultado;
    int fracao[2];
    char erro[10];
};

int main(){
    int x;int y;int operacao;union value resposta;
    printf("Digite os operandos x e y\n");scanf("%d %d",&x,&y);
    printf("Digite a operação: 1 - Adição, 2 - Subtração, 3 - Multiplicação , 4 - Divisão\n");scanf("%d",&operacao);

    switch(operacao){
        case 1:
            resposta.resultado = x+y;
            break;
        case 2:
            resposta.resultado = x-y;
            break;
        case 3:
            resposta.resultado = x*y;
            break;
        case 4:
            if(y==0){
                strcpy(resposta.erro,"Erro");
                break;
            }
            resposta.fracao[0] = x/y;resposta.fracao[1] = x%y;
            break;
    }
    if(operacao==4 && y != 0){
        printf("Resultado: %d %d\n",resposta.fracao[0],resposta.fracao[1]);
    }else if(operacao==4 && y == 0){
        printf("Resultado: %s\n",resposta.erro);
    }else{
        printf("Resultado: %d\n", resposta.resultado);
    }
    return 0;
}
