/*
Nigel Denish
CT101/G/21623/24
*/



// Online Carrays -3D
#include <stdio.h>

int main() {
   int i;
   int j;
   int k;
   int marks[2][2][4] ={ {{20,30,40,50},{60,70,80,90}},{{20,30,40,50},{60,70,80,90}}};
   
   for(i=0;i<2;i++){
       for(j=0;j<2;j++){
           for(k=0;k<4;k++){
       printf("marks[%d][%d][%d]=%d \n",i,j,k,marks[i][j][k]);
           }
       }
       
}

    return 0;
}