#include <stdio.h>

int main(){

    float numero1,*pnumero;
    pnumero = &numero1;

    printf("Contenido del puntero %p\n",pnumero);
    printf("Direccion almacenada por el puntero %p\n",pnumero);
    printf("Direccion de memoria de la variable %p\n",&numero1);
    printf("Direccion de memoria del puntero %p\n",&pnumero);
    printf("Tamanio de la variable %zu \n",sizeof(float));
    printf("hola mundo");
    return 0;
    
}