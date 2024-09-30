    #include <stdio.h>
int multuplycation(int a){
  for (int b=0;b<=10;b++){
      printf("%d * %d = %d \n",a,b,a*b);
  }
}


int main() {
 int a;
 
printf("entrer une number: ");
scanf("%d",&a);
multuplycation(a);


}