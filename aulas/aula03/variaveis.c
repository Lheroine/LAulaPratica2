#include <stdio.h> 
int main () {
    char tecla;
    int idade;
    float nota;
    double dizima_periodica;
    const double PI = 3.141516;

    tecla = 'A';
    idade = 16;
    nota = 5.5f;
    dizima_periodica = 1.333333333333;
    
    printf("Os valores das variaveis:\n");
    printf("tecla= %c\n", tecla);
    printf("idade = %i\n", idade);
    printf("nota = %.1f\n", nota);
    printf("dizima = %.12f\n", dizima_periodica);

    return 0;
}