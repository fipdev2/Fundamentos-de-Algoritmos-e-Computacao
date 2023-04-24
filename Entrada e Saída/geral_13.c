#include <stdio.h>

int main(void) {
  
  float qntd_suco, qntd_refresco, concentrado;
  float lucro_suco, lucro_refresco, percento_suco, percento_refresco;
  
  printf("Informe a quantidade de litros que tem seu concentrado\n");
  scanf("%f", &concentrado);

  qntd_suco = concentrado*3;
  qntd_refresco = concentrado*5;
  
  lucro_suco = qntd_suco * 2.00 * 10; 
  lucro_refresco = qntd_refresco * 1.00 * 10;

  percento_suco =  (lucro_suco - (10/1.5*concentrado))/lucro_suco * 100;
  percento_refresco =  (lucro_refresco - (10/1.5*concentrado))/lucro_refresco * 100;
  
  printf("Com %.1f litros de concentrado podem ser feitos %.1fL de refresco e ganhar R$ %.2f\n", concentrado, qntd_refresco, lucro_refresco);
  printf("Com %.1f litros de concentrado podem ser feitos %.1fL de suco e ganhar R$ %.2f\n", concentrado, qntd_suco, lucro_suco);
  
  printf(" _________________________________ \n|Os percentuais de lucro são:     |\n|=> suco: %1.f%% \t=> refresco: %.1f%%|\n _________________________________ ", percento_suco, percento_refresco);
  
  

  
  
  
  return 0;
}