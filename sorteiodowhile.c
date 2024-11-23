#include <stdio.h>//para usa a biblioteca
#include <stdlib.h>// para usar o rand
#include <time.h>// para pegar os tempo 

//forma de repetição do-while executado no fim do programa

int main() {
    //declarando as variaveis
    int num_sorteado, cont=0;
    
    //entrada de dados
    printf("Gerando 6 números aleatórios entre 1 e 60: \n ");
    //funcão srand => função para gerar números aleatórios.
    //função time(Null) => calcula o total de segundos passados desde 1 de janeiro de 1970 ate a data de hoje.
    // não permite ter uma seguencia viciada
    srand(time(NULL));
    do {
        num_sorteado = rand()%60+1;
        printf("%d - ",num_sorteado);
        cont++; // acrescenta + 1
    } while (cont < 6);
     return 0;
}