 #include <stdio.h>
int minimant(int a, int b){
    int min;
     min=0; 
    for (int b=0;b<a;b++){
        
        
        if (min<a){
            min=a;
        }
     
   return min;
}
}

int main() {
 int a,b;
 int result;
printf("entrer une number: ");
scanf("%d",&a);
printf("entrer une number: ");
scanf("%d",&b);
 result=minimant(a,b);
printf("la minimal est %d \n",result);


}