/*
NIGEL DENISH
CT101/G/21623\24
*\
// Online C compiler to calculate compound interest
#include <stdio.h>
#include <math.h>

int main(){

    int principal;
    int rate;
    int number_of_compoundings;
    int time;
    int compound_interest;

    printf("enter principal:");
    scanf("%d",&principal);
    printf("enter rate(in percentage):");
    scanf("%d",&rate);
    printf("enter number_of_compoundings:");
    scanf("%d",&number_of_compoundings);
    printf("enter time(in years):");
    scanf("%d",&time);



   compound_interest =principal*pow((1+ rate/number_of_compoundings),(number_of_compoundings*time));

    printf("compound_interest is:%d\n",compound_interest);

    return 0;
}



