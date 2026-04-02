// codigo_roto.c
#include <stdio.h>

void duplicar_numero(int *numero) {
    *numero = *numero * 2;
}

int main() {
    int valor1,*pvalor1;
    int valor2,*pvalor2;
    pvalor1 = &valor1;
    pvalor2 = &valor2;

    printf("Ingrese el primer valor: ");
    scanf("%d", &valor1);

    printf("Ingrese el segundo valor: ");
    scanf("%d", &valor2);

    printf("La suma es: %d\n", *pvalor1+*pvalor2);

    duplicar_numero(&valor1);
    printf("El primer valor duplicado es: %d\n", *pvalor1);

    return 0;
}