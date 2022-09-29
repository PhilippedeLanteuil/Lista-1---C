#include <stdio.h>
int main() {
	float celsius, fahr;
    printf("\nDigite uma temperatura em graus centigrados: ");
    scanf("%f",&celsius);
    fahr = (9 * celsius + 160) / 5;
    printf("\nA temperatura em Fahrenheit eh: %f", fahr);
    return 0;
}
