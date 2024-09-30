#include <stdio.h>
int Fibonacci (int a){
    
  if (a<=1){
  return a;
  }
  return Fibonacci(a-1)+Fibonacci(a-2);
}

int main() {
    int a,b;
    
    printf("entrer un number: ");
    scanf("%d",&a);
    printf("la loi de Fibonacci %d: \n",a);
   for (b=0;b<a;b++){
printf("%d",Fibonacci(b));
   }
    return 0;
}