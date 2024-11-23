#include <stdio.h>
#include <stdlib.h>
int fatorial_iter(int n);

int main() {
    int num;
    printf("Digite un número inteiro: ");
    scanf("%d",&num);
    printf("O fatoreal do número é igual a %d \n", fatorial_iter(num));
        return 0;
}
//subprogama
int fatorial_iter(int n){
    int fat = 1, cont;
    for(cont=1; cont <= n; cont++){
        fat = fat * cont;
        }
    return fat;    
}