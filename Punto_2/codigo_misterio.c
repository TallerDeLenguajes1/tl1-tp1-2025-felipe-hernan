#include <stdio.h>

void invertir(int *pNumero) {
    int valor_inicial = *pNumero;
    int numero_invertido = 0;
    while (valor_inicial > 0) {
        numero_invertido = (numero_invertido * 10) + (valor_inicial % 10);
        valor_inicial = valor_inicial / 10;
    }
    *pNumero = numero_invertido;
}

void mitad(int *pNumero) {
    *pNumero = *pNumero / 2;
}

void suma_digito_numero(int *pNumero) {
    int valor_inicial = *pNumero;
    int suma = 0;
    while (valor_inicial > 0) {
        suma = suma + (valor_inicial % 10);
        valor_inicial = valor_inicial / 10;
    }
    *pNumero = *pNumero + suma;
}

void transforma_numero(int *valor_referencia) {
    invertir(valor_referencia);
    mitad(valor_referencia);
    suma_digito_numero(valor_referencia);
}

int main() {
    int tranformar = 452;
    
    printf("Iniciando depuracion con el valor: %d\n", tranformar);
    
    // Instrucción para el alumno: 
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    transforma_numero(&tranformar);
    
    printf("Resultado final del enigma: %d\n", tranformar);
    
    return 0;
}