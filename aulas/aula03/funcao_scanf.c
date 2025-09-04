#include <stdio.h>
int main () {
    char tecla;
    int idade;
    float nota;

    printf("Informe os valores da variáveis:\n");
    scanf("%c", &tecla); // scanf não sabe tecla = valor, guardar valor na tecla;
    scanf("%i", &idade); // precisa do & 
    scanf("%f", &nota);
    
    printf("Os valores informados foram:\n");
    printf("tecla= %c\n", tecla);
    printf("idade= %i\n", idade);
    printf("nota= %f\n", nota);
    
    return 0;
}