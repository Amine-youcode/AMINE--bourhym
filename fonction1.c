#include <stdio.h>
int somme(int a,int b){
    
     
    return a+b;
}

int main() {
 int a,b,result;
printf("entrer une number: ");
scanf("%d",&a);
printf("entrer une number: ");
scanf("%d",&b);
 result=somme(a,b);
printf("la somme est %d",result);

    return 0;
}