#include <stdio.h>

int main() {
	int n = 0;
	int i = 0;
	printf("Ingresa un numero: ");

	scanf("%d", &n);

	while(n != 1) {
		if(n % 2 == 0) {
			n = n / 2;
		} else {
			n = (3 * n) + 1;
		}
		i++;
		printf("%d ", n);
	}
	printf("\nIteraciones: %i", i);
	return 0;
}