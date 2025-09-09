#include<stdio.h>
int main(){
    //--VARIAVEIS DO JOGO--
    char Estado[50];
    char Codigo[10];
    char Cidade[50];
    int Populaçao;
    float Area;
    float Pib;
    int Pontos;

printf("BEM VINDO AO JOGO \n");
    //-- INICIO DO CODIGO--
printf("CARTA 01 \n");

printf("Estado(Uma Letra entre 'A' e 'H'): \n");
scanf("%s", Estado);

printf("Codigo( letra do estado seguida de um número de 01 a 04): \n");
scanf("%s", Codigo );

printf("Nome da Cidade: \n");
scanf("%s", Cidade);

printf("População: \n");
scanf("%d", &Populaçao);

printf("Área: \n");
scanf("%f", &Area);

printf("PIB: \n");
scanf("%f", &Pib);

printf("Numero de Pontos turisticos: \n");
scanf("%d", &Pontos);

printf("CARTA 01 \n");
printf("Estado: %s \n", Estado);
printf("Código: %s \n", Codigo);
printf("Nome da cidade: %c \n", Cidade);
printf("População: %d \n",Populaçao);
printf("Área ( Em Km²): %f \n", Area);
printf("PIB: %f \n", Pib);
printf("Numero de pontos turisticos: %d \n", Pontos);


//----------------------------------------------------------------/


printf("CARTA 02 \n");

printf("Estado (Uma letra entre 'A' e 'H'):\n");
scanf(" %s", Estado);

printf("Codigo:\n");
scanf(" %s", Codigo);

printf("Nome da Cidade: \n");
scanf(" %s", Cidade);

printf("População: \n");
scanf(" %d", &Populaçao);

printf("Área: \n");
scanf("%f", &Area);

printf("PIB: \n");
scanf(" %f", &Pib);

printf("Numero da pontos turisticos: \n");
scanf("%d", &Pontos);





printf("CARTA 2 \n");
printf("Estado: %s \n", Estado);
printf("Código: %s \n", Codigo);
printf("Nome da cidade: %S \n", Cidade);
printf("População: %d \n",Populaçao);
printf("Área( Em Km²): %f \n", Area);
printf("PIB: %f \n", Pib);
printf("Numero de pontos turisticos: %d \n", Pontos);









return 0;




} 