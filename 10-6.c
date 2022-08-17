#include <stdio.h>
void factorial(int);

int main(){ 

     int num;
     printf("Enter the number : ");
     scanf("%d",&num);

     factorial(num);
return 0; 
}

void factorial(int x){
  int fact=1;

    if (x==0)
    printf("factorial of %d is : %d ",x,fact);
    
    else {
         for (int i=1;i<=x;i++){
            fact=fact*i;
         } 
       printf("factorial of %d is : %d ",x,fact);
    }
}
