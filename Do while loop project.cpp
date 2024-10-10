//Nigel Denish
//CT101/G/21623/24



//Do while loop to start and stop values

#include <stdio.h>
int main(){
	int start=0;
	int stop=50;
	int  sum=0;
	//enter start and stop values
	printf("enter when to start:");
	scanf("%d",&start);
	printf("enter when to stop:");
	scanf("%d",&stop);
	
	int i=start;
	do{
		printf("%d\n",i);
		sum+=i;
		i++;
		}
		while(i<=stop);
		printf("sum is:%d",sum);
		return 0;
}