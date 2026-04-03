#include <stdio.h>

int cuadrado1(int numero){
    return numero*numero;
}

void cuadrado2(int *numero){
    *numero = *numero*(*numero);
}

void muestra_direccion_valor(int *numero){
    printf("Direccion de la variable ingresada %p\n",numero);
    printf("Valor de la variable ingresada %d\n",*numero);
}

void invertir(float *numA, float *numB){
    float aux;
    aux = *numA;
    *numA = *numB;
    *numB = aux;
}

void orden(int *numeroA,int *numeroB){
    int aux;
    if (*numeroA > *numeroB){
        aux = *numeroA;
        *numeroA = *numeroB;
        *numeroB = aux;
    }
}

int main(){

    int numeroA = 6,numeroB = 2;
    float numero1 = 2.5, numero2 = 9.3;


    printf("cuadrado 1 %d\n",cuadrado1(numeroA));
    cuadrado2(&numeroA);
    printf("cuadrado 2 %d\n",numeroA);
    muestra_direccion_valor(&numeroA);
    printf("valor de numero1 antes %.1f\n",numero1);
    printf("valor de numero2 antes %.1f\n",numero2);
    invertir(&numero1,&numero2);
    printf("valor de numero1 despues %.1f\n",numero1);
    printf("valor de numero2 despues %.1f\n",numero2);

    printf("valor de numeroA antes %d\n",numeroA);
    printf("valor de numeroB antes %d\n",numeroB);
    orden(&numeroA,&numeroB);
    printf("valor de numeroA despues %d\n",numeroA);
    printf("valor de numeroB despues %d\n",numeroB);

    return 0;
    
}