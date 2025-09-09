#include<stdio.h>
int main(){
 
    printf("INICIO DO SUPER TRUNFO EM C");

    char ESTADO[50];
    char CODIGO[10];
    char CIDADE[50];
    int POPULACAO;
    float AREA;
    float PIB;
    int PONTOSTURISTICOS;

printf("BEM VINDO AO JOGO \n");


printf("ESTADO( Uma letra entre A a H)\n ");
scanf("Estado: %s", ESTADO);

printf("CODIGO (Letra do Estado seguida de  um numeri de 01 a 04)\n");
scanf("CODIGO:%s", CODIGO);

printf("CIDADE:\n");
scanf("CIDADE:%s", CIDADE);

printf("POPULAÇAO: \n");
scanf("POPULAÇAO: %d", POPULACAO);

printf("ÁREA( Em KM²)\n");
scanf("AREA(Em KM²): %f", AREA);

printf("PIB: /n");
scanf("PIB: %f", PIB );

printf("PONTOS TURISTICOS:\n");
scanf("PONTOS TURISTICOS: %d", PONTOSTURISTICOS);

printf("CARTA 01\n");

printf("Estado: %s \n", ESTADO);
print("Codigo: %s \n", CODIGO);
printf("Cidade: %s \n", CIDADE);
printf("População: %d \n", POPULACAO);
printf("Área ( EM KM²): %f\n", AREA);
printf("PIB( Produto Interno Bruto): %f\n", PIB);
printf("Pontos turisticos: %d\n", PONTOSTURISTICOS);







}