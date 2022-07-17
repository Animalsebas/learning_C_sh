#include <stdio.h>
int main(){
 float celsius, fahr;
 int upper, lower, step;
 lower = -20;
 upper = 120;
 celsius = lower;
 step = 20;
 printf("Celsius\t  Fahr\n");
 while(celsius<=upper){
  fahr = celsius*1.8+32;
  printf("%3.0f\t%6.1f\n",celsius,fahr);
  celsius = celsius+step;
 }
 return 0;
}
