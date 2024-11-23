#include <stdio.h>//para usa a biblioteca
#include <stdlib.h>// para usar o rand
#include <time.h>// para pegar os tempo 



int main() {
    //declarando as variaveis
    int num_sorteado, cont;
    
    //entrada de dados
    printf("Gerando 6 números aleatórios entre 1 e 60: \n ");
    //funcão srand => função para gerar números aleatórios.
    //função time(Null) => calcula o total de segundos passados desde 1 de janeiro de 1970 ate a data de hoje.
    // não permite ter uma seguencia viciada
    srand(time(NULL));
    for (cont=0; cont<6; cont++) {
        num_sorteado = rand()%60+1;
        printf("%d - ",num_sorteado);
        
    } 
     return 0;
}