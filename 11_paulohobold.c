#include <stdio.h>
int main() {
  float f, c;
  
 printf( "Digite a temperatura em Fahreneit para transformar em Celsius: ");
  scanf("%f", &f);

  c = (f-32)*(5)/9;

  printf(" %.1f°Fahreneit equivalem a %.2f°Celsius",f,c );

    return 0;

}

//Desenvolva um programa que receba um valor de temperatura em graus Fahrenheit (ºF) e o converta para graus Celsius (ºC). Como resultado, mostre a seguinte mensagem: “XXºF equivalem a YYºC.”. A f´ormula de convers˜ao ´e:
// celsius = 5×(f ahrenheit−32)9 .