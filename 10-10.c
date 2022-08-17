#include <stdio.h>
void factors(int);

int main(){ 
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

   factors(num);
return 0; 
}

void factors(int n){
    int i;

    for (i=2;n!=1;i++){
        while (n%i==0){
            n=n/i;
            printf("%d ",i);

        }
    }
    
}