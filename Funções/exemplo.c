#include <stdio.h>
#include <math.h>

float calculaDist2Pontos(int x1, int y1, int x2, int y2){
	float dist = sqrt( pow((x1-x2),2 ) + ( pow((y1-y2),2) ));
	return dist;
}

float calculaPerimetro(int xa,int ya,int xb,int yb,int xc,int yc){
	float dAB, dBC, dAC;
	dAB = calculaDist2Pontos(xa,ya,xb,yb);
	dBC=calculaDist2Pontos(xb,yb,xc,yc);
	dAC=calculaDist2Pontos(xa,ya,xc,yc);	
	return dAB+dBC+dAC;
}

void exibirResultado(float perimetro){
	printf("O perimetro desse triangulo eh %f", perimetro);
	return;
} 

int main(){
	int xa, ya, xb, yb, xc, yc;
	float perimetro;
	
	printf("Digite as cordenadas do ponto A\n");
	scanf("%d, %d", &xa, &ya);
	printf("Digite as cordenadas do ponto B\n");
	scanf("%d, %d", &xb, &yb);
	printf("Digite as cordenadas do ponto C\n");
	scanf("%d, %d", &xc, &yc);
	
	perimetro = calculaPerimetro(xa, ya, xb, yb, xc, yc);
	exibirResultado(perimetro);

	return 0;
}
