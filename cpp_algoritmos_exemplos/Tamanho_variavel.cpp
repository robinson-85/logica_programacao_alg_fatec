// Faça um programa em C que mostra quantos bytes 
//ocupam cada uma das variáveis: char, int, float e double.

#include <stdio.h>

int main(void)

{
    printf("Char: %d bytes\n", sizeof(char));
    printf("Int: %d bytes\n", sizeof(int));
    printf("Float: %d bytes\n", sizeof(float));
    printf("Double: %d bytes\n", sizeof(double));
    return 0;

}
