#include <stdio.h>
int main() {
	int num1, num2, num3;
	float media;
	printf("\nDigite o primeiro numero: ");
	scanf("%d", &num1);
	printf("\nDigite o segundo numero: ");
	scanf("%d", &num2);
	printf("\nDigite o terceiro numero: ");
	scanf("%d", &num3);
	media = (num1 + num2 + num3) / 3;
	printf("\nO resultado da m�dia foi: %f" ,media);
	return 0;
}
	
