#include <stdio.h>
int func (int,int);

int main(){ 

int num,digit;  
printf("Enter the number : ");
scanf("%d",&num);
printf("Enter the digit to be checked : ");
scanf("%d",&digit);

int s=func(num,digit);
printf("%d",s);

return 0; 
}

int func (int x,int y){
   int r;
    while (x>0){
        r=x%10;

        if (r==y)
        return 1;

        x=x/10;
    }
        return 0;
}