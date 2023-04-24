#include <stdio.h>
#include <math.h>

float calcula_area(int qtd, float altura, float raio)
{
    float area;
    area = qtd * (2 * (3.14 * raio * raio) + (altura * 2 * 3.14 * raio));
    return area;
}

int main()
{
    int qtd_latas, qtd_tanque;
    float area_tanque, altura_tanque, raio_tanque, custo_total;

    printf("Forneca quantidade de tanques que voce quer pintar\n");
    scanf("%d", &qtd_tanque);
    printf("Forneca a altura e o raio (aa rr) em metros\n");
    scanf("%f %f", &altura_tanque, &raio_tanque);

    area_tanque = calcula_area(qtd_tanque, altura_tanque, raio_tanque);
    qtd_latas = ceil(area_tanque / 15);
    custo_total = qtd_latas * 20.00;

    printf("Quantidade de latas:%d\nCusto total:R$%.2f", qtd_latas, custo_total);

    return 0;
}