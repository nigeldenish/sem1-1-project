/*
NIGEL DENISH
CT101/G/21623/24
*\



// Online C compiler to calculate simple interest
#include <stdio.h>

int main() {
    int principal;
    int rate;
    int time;

     scanf("%d",&principal);
     scanf("%d",&rate);
     scanf("%d",&time);
int si;
si=(principal*time*rate)/100;
printf("%d",si);
    return 0;
}




