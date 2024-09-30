#include <stdio.h>
int InversionChaîne (int a){
    int b;
 while (0<a){
     b=a%10;
     printf("%d",b);
     a=a/10;
     
 }
 return b;
}
int main() {
    int a;
    printf("entrer un number: ");
    scanf("%d",&a);
    InversionChaîne(a);
    
  
    return 0;
}