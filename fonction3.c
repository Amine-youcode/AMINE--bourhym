   #include <stdio.h>
int maximal(int a, int b){
    int max;
     max=0; 
    
        
        
        if (a>b)
            max=a;
        else
           max=b;
     
   return max;
}


int main() {
 int a,b;
 int result;
printf("entrer une number: ");
scanf("%d",&a);
printf("entrer une number: ");
scanf("%d",&b);
 result=maximal(a,b);
printf("la maximal est %d \n",result);


}