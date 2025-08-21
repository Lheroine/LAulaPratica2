#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ""); 
    printf("Olá Pessoal!\n");
    printf("Em que posso ajudar?\n");
    printf("Gere minha NOTA LEGAL\n");
    printf("=========================\n");
    printf(" N O T A L E G A L\n");
    printf("=========================\n");
    printf("Caderno   001       30.00\n");
    printf("Lápis     002        7,50\n");
    printf("=========================\n");
    printf("Total..........:    69,50\n\n\n");
    // %c - imprimir um caractere
    // %s - imprimir um text (string) 
    // %i - imprimir um inteiro
    // %f - imprimir um fracionario (flutuante)

    printf("%s %i %7.2f\n", "Caneta", 3, 11.75);
    printf("%s %i %7.2f\n", "Postit", 3, 100.00);
 
    

    return 0;
}