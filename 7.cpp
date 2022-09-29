#include <stdio.h>
int main() {
    float contapoupanca, contareajuste;
    printf("\nDigite o saldo da conta poupanca: ");
    scanf("%f",&contapoupanca);
    contareajuste = contapoupanca * 1.02;
    printf("\nO saldo com reajuste foi: %f" ,contareajuste);
    return 0;
}
