#include <stdio.h>
int main() {
    int num1, num2, soma, sub;
    float mult, div;
    printf("\nDigite o primeiro numero: ");
    scanf("%d",&num1);
    printf("\nDigite o segundo numero: ");
    scanf("%d",&num2);
    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;
    printf("\nO resultado da soma foi: %d" ,soma);
    printf("\nO resultado da subtracao foi: %d" ,sub);
    printf("\nO resultado da multiplicação foi: %f" ,mult);
    printf("\nO resultado da divisao foi: %f" ,div);
    return 0;
}
