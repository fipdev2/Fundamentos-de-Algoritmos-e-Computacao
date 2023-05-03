#define M_PI
#include <stdio.h>
#include <math.h>

float calculaAreaRetangulo(float altura){
    float largura = 2*(float)M_PI;
    return largura * altura;
}

float calculaAreaCirculo(float raio){
    return M_PI * pow(raio,2); 
}

float calculaAreaTanque(float altura, float raio){
  return calculaAreaRetangulo(altura) + 2 * calculaAreaCirculo(raio);
}

int calculaQtdLatas(float areaTanque){
    int litroLataM2 = 3;
    int lataLitros = 5;

    //se passar de uma lata, o resultado é arredondado para cima, pois lata é um valor inteiro
    int qtdLatas = ceil(areaTanque/(litroLataM2*lataLitros));
    return qtdLatas;
}

float calculaPreco(int qtdLatas){
    float precoLata = 20.0;
    return qtdLatas * precoLata; 
}

int main(){
    float raio, altura, areaTanque, preco;
    int qtdLatas;

    printf("Digite o valor da altura do tanque em metros\n");
    scanf("%f", &altura);

    while(altura<=0){
        printf("Digite um valor valido\n");
        scanf("%f", &altura);
    }

    printf("Digite o valor do raio do tanque em metros\n");
    scanf("%f", &raio);
    
    areaTanque=calculaAreaTanque(altura, raio);
    qtdLatas=calculaQtdLatas(areaTanque);
    preco=calculaPreco(qtdLatas);

    printf("Para pintar um tanque de %.1fm de altura e %.1fm de raio, voce vai utilizar %d latas, o que vai custar R$%.2f", altura, raio, qtdLatas, preco);
    

    


    return 0;
}
