#include <stdio.h>

int main()
{
    int valor_sobre15, percentual_disc, preco_base;
    float preco_disc;

    printf("Insira aqui o codigo do produto\n");
    scanf("%d %d", &valor_sobre15, &percentual_disc);

    preco_base = valor_sobre15 * 15 + percentual_disc;
    preco_disc = preco_base - 0.14*preco_base;

    printf("Valor a pagar:\tR$ %.2f ", preco_disc);

        return 0;
}
