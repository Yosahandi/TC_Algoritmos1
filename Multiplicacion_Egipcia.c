#include <stdio.h>

void multiplicacionEgipcia(int a, int b) {
    int result = 0;
    
    while (a > 0) {
        if (a % 2 == 1) {
            printf("%d + %d = %d\n", result, b, result + b);
            result += b;
        }
        printf("%d * 2 = %d\n", a, a * 2);
        printf("%d / 2 = %d\n", b, b / 2);
        a /= 2;
        b *= 2;
    }
    
    printf("Resultado final: %d\n", result);
}

int main() {
    int num1, num2;
    printf("Ingresa dos numeros enteros para multiplicar: ");
    scanf("%d %d", &num1, &num2);
    
    multiplicacionEgipcia(num1, num2);
}