/*Nigel Denish
CT101/G/21623/24
*/

// Online Carrays -2D
#include <stdio.h>

int main() {
   int i;
   int j;
   int marks[2][4] ={ {20,30,40,50},{60,70,80,90}};
   
   for(i=0;i<2;i++){
       for(j=0;j<4;j++){
       printf("marks[%d][%d]=%d \n",i,j,marks[i][j]);
       }
       
}

    return 0;
}