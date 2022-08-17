#include <stdio.h>
int s_i (int,int,int);

int main(){ 
    int principle ,r_o_i ,time;

    printf("Enter the values of principle ,rate of interest and time:\n");
    scanf("%d %d %d",&principle,&r_o_i,&time);

    s_i( principle, r_o_i, time);

return 0; 
}

int s_i(int p,int r,int t){

    int simple_interest=(p*r*t)/100;
     printf("The simple interest is %d\n",simple_interest);
    return 0;
}