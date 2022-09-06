#include <stdio.h>

int main() {
int num;
printf("Digite um numero:");
scanf("%d", &num);
switch(num){
  case 1:{
    printf("Eua.\n");
    printf("Valor em dolar: 100.00\n");
    printf("Codigo do pais: 1\n");
    printf("Cotacao do dia: 5.48\n");
    printf("A conversao de $ 100.00 em dolar no dia de hoje equivale a R$ 548.00\n");
   break;
  }
  case 2:{
    printf("\n Portugal.");
    printf("\n Valor em euro: 100.00");
    printf("\n Codigo do pais: 2");
    printf("\n Cotacao do pais: 6.63");
    printf("\n A conversao de $ 100.00 em euros no dia de hoje equivale a R$663.00 ");
    break;
  }
  case 3:{
    printf("\n Argentina.");
    printf("\n Valor em peso argentino: 100.00");
    printf("\n Codigo do pais: 3");
    printf("\n Cotacao do pais: 0.074");
    printf("\n A conversao de $ 100.00 em peso argentino no dia de hoje equivale a R$ 7.40");
    break;
  }
  case 4:{
    printf("\n Chile.n");
    printf("\n Valor em peso chileno: 100.00");
    printf("\n Codigo do pais: 4");
    printf("\n Cotacao do pais: 0.0072");
    printf("\n A conversao de $ 100.00 em peso chileno no dia de hoje equivale a R$ 0.72");
    break;
  }
  case 5:{
    printf("Peru.\n");
    printf("Valor em novo sol: 100.00\n");
    printf("Codigo do pais: 5\n");
    printf("Cotacao do pais: 1.57\n");
    printf("A conversao de $ 100.00 em novo sol no dia de hoje equivale a R$ 157.00\n");
    break;
  }
  case 6:{
    printf("Inglaterra.\n");
    printf("Valor em libra esterlina: 100.00\n");
    printf("Codigo do pais: 6\n");
    printf("Cotacao do pais: 7,28\n");
    printf("A conversao de $ 100.00 em libra esterlina no dia de hoje equivale a R$ 728.00\n");
    break;
  }
  default: printf("Numero invalido.\n");
}
}
