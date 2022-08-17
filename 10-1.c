#include <stdio.h>
int area(int);

int main(){ 
    int r;
    printf("Enter the radius of the circle\n");
    scanf("%d",&r);

    printf("The area of circle is %d\n",area(r));

return 0; 
}

int area (int x)
{
int a=(3.14*x*x);
return a;
}
