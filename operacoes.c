#include <stdio.h>

int main() {
    //declarando as variaveis
    int opc;
    float n1,n2,res=0;
    //entrada de dados
    printf("Digite um numero: ");
    scanf("%f",&n1);
    printf("Digite outro numero: ");
    scanf("%f",&n2);
    printf("1 - Adição \n");
    printf("2 -  Subtração \n");
    printf("3 - Multiplicação \n");
    printf("4 - Divisão \n");
    printf("Escolha uma das opções: ");
    scanf("%d",&opc);
    printf("O resultado da ");
    // processamento
    switch(opc) {
        case 1:
            res= n1 + n2;
            break;
        case 2:
            res= n1 - n2;
            break;   
        case 3:
            res= n1 * n2;
            break;    
        case 4:
            res= n1 / n2;
            break;
        default:
            printf("Opição invalida");
    }
    printf("o resultado é %.2f",res);
    return 0;
}

