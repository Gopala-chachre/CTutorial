/*
O 
X X
O O O
X X X X
O O O O O
*/
#include<stdio.h>
void main(){
    int i, j;
    for (i=1; i<=5; i++){
        for (j=1; j<=i; j++)
        {
            if (i%2==0)
            {
                printf("X ");
            }else
            {
                printf("O ");
            }
        }
        printf("\n");
    }
}