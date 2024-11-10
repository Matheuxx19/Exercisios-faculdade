/*Use uma função com passagem de parâmetros por referência para inverter os elementos de um vetor. 
Use as funções: read_vec(vetor, N), show_vec(vetor, N) e inv_vec(vetor, N) para leitura, exibição e processamento dos vetores, respectivamente.
 
Para a compilação no Moodle você deve estruturar seu programa com a leitura do vetor, exibição de seu conteúdo, processamento do vetor e posterior exibição do conteúdo, usando as funções requeridas.*/


void read_vec(int *vetor,int N);
void show_vec(int *vetor,int N);
void inv_vec(int *vetor,int N);

int main(){
    int *vetor = malloc(10000*sizeof(int));
    int N;
    printf("Digite o tamanho do vetor:\n");scanf("%d",&N);
    printf("Digite os elementos do vetor:\n");
    read_vec(vetor,N);
    show_vec(vetor,N);
    inv_vec(vetor,N);
    return 0;
}

void read_vec(int *vetor,int N){
    int i;
    for(i=0;i<N;i++){
        scanf("%d",vetor+i);
    }
}

void show_vec(int *vetor,int N){
    int i;
    printf("O vetor é:");
    for(i=0;i<N;i++){
        printf(" %d",vetor[i]);
    }
    printf("\n");
}

void inv_vec(int *vetor,int N){
    int i;
    int i2 = 0;
    int *aux = malloc(10000*sizeof(int));

    for(i=N-1;i>-1;i--){
        aux[i2] = vetor[i];
        i2++;
    }

    vetor = aux;
    printf("O vetor é:");
    for(i=0;i<N;i++){
        printf(" %d",vetor[i]);
    }
    printf("\n");
}
