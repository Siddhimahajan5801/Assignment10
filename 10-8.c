#include <stdio.h>
int factorial(int);
int arrangements(int,int);

int main(){ 
    int n,r;
    printf("Enter the number of objects : ");
    scanf("%d",&n);
    printf("Enter the number of objects r to be taken at a time :  ");
    scanf("%d",&r);

    arrangements(n,r);

return 0; 
}

int arrangements (int x,int y){

    int a= factorial(x);
    int b= factorial(x-y);

      int z= a/b;

    printf("\nThe number of arrangements from %d objects taken %d at a time : %d \n",x,y,z);
    return 0;
}

int factorial(int x){
  int fact=1;

    if (x==0)
    printf("factorial of %d is : %d ",x,fact);
    
    else 
         for (int i=1;i<=x;i++)
            fact=fact*i;
        
    return fact;
}

