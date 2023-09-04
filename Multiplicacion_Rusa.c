#include <stdio.h>

void multiplicacionRusa(int a, int b) {
    int result = 0;

    printf("Multiplicación Rusa para %d y %d:\n", a, b);
    printf("   a     |     b     |    Resultado\n");
    printf("----------|-----------|--------------\n");

    while (a >= 1) {
        if (a % 2 == 1) {
            result += b;
            printf("%5d     |%7d     |%11d *\n", a, b, result);
        }
        printf("%5d     |%7d     |%11d\n", a, b, result);
        a /= 2;
        b *= 2;
    }

    printf("-------------------------------------\n");
    printf("Resultado final: %d\n", result);

}

int main() {

	int num1, num2;
    printf("Ingrese dos números enteros para multiplicar: ");
    scanf("%d %d", &num1, &num2);

    multiplicacionRusa(num1, num2);

	return 0;
}