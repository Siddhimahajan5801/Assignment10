#include <stdio.h>
void func(int);

int main(){ 

    int n;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    
    printf("The first N natural numbers :\n");
    func(n);

return 0; 
}

void func(int x){
    for (int i=1;i<=x;i++)
    printf("%d ",i);
}