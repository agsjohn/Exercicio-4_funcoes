#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int funcao1(int num);
int funcao2(int num);

main(){
    int num;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um número: ");
    scanf("%i", &num);
    getchar();
    num = funcao1(num);
    printf("Resultado: %i", num);
    getchar();
}

int funcao1(int num){
    num = num + 7;
    num = funcao2(num);
    return num;
}
int funcao2(int num){
    num = num - 3;
    return num;
}
