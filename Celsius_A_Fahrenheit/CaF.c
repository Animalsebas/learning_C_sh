#include <stdio.h>
int main(){
 int celsius;float fahr;
 printf("Ingrese Celsius: \n");
 scanf("%d",&celsius);
 fahr = celsius*1.8+32;
 printf("La conversion son %.1f Fahrenheit\n",fahr);
 return 0;
}
