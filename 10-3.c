#include <stdio.h>
int even_or_odd(int);

int main(){ 
      int num;
      printf("Enter the number to check even or odd: ");
      scanf("%d",&num);
      printf("%d",even_or_odd(num));

return 0; 
}

int even_or_odd(int x){
   
   if (x%2==0)
    return 1;

   else 
   return 0;
}