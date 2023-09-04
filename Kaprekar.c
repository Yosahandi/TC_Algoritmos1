#include <stdio.h>

// Función para ordenar los dígitos de un número en orden ascendente
int ordenarAscendente(int num) {
    int digitos[4];
    for (int i = 0; i < 4; i++) {
        digitos[i] = num % 10;
        num /= 10;
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 - i; j++) {
            if (digitos[j] > digitos[j + 1]) {
                int temp = digitos[j];
                digitos[j] = digitos[j + 1];
                digitos[j + 1] = temp;
            }
        }
    }
    int resultado = 0;
    for (int i = 0; i < 4; i++) {
        resultado = resultado * 10 + digitos[i];
    }
    return resultado;
}

// Función para ordenar los dígitos de un número en orden descendente
int ordenarDescendente(int num) {
    int digitos[4];
    for (int i = 0; i < 4; i++) {
        digitos[i] = num % 10;
        num /= 10;
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 - i; j++) {
            if (digitos[j] < digitos[j + 1]) {
                int temp = digitos[j];
                digitos[j] = digitos[j + 1];
                digitos[j + 1] = temp;
            }
        }
    }
    int resultado = 0;
    for (int i = 0; i < 4; i++) {
        resultado = resultado * 10 + digitos[i];
    }
    return resultado;
}

// Función para realizar la operación de Kaprekar
int kaprekar(int num) {
  int ascendente = ordenarAscendente(num);
  int descendente = ordenarDescendente(num);
  return descendente - ascendente;
}

int main() {

    int numero;
    printf("Ingrese un número: ");
    scanf("%d", &numero);

    int iteraciones = 0;
    while (numero != 6174) {
      printf("%d ", numero);
      numero = kaprekar(numero);
      iteraciones++;
    }
    printf("%d ", numero);
    printf("Número de iteraciones hasta llegar a 6174: %d\n", iteraciones);

    return 0;
}