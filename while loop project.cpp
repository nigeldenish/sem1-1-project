//Nigel Denish
//CT101/G/21623/24


//while loop enter value to start and stop

#include <stdio.h>
int main(){
	int start=0;
	int stop=50;
	int sum=0;
	
	printf("when to start:");
	scanf("%d" ,&start);
	printf("when to stop:");
	scanf("%d" ,&stop);
	
	int i= start;
	while(i<=stop) {
		printf("%d\n",i);
		sum+=i;
		i++;
		}
		printf("sum is:%d",sum);
		return 0;

	
}