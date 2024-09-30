   #include <stdio.h>
int multuplucation(int a,int b){
    
     
    return a*b;
}

int main() {
 int a,b,result;
printf("entrer une number: ");
scanf("%d",&a);
printf("entrer une number: ");
scanf("%d",&b);
 result=multuplucation(a,b);
printf("la multuplucation est %d",result);

    return 0;
}