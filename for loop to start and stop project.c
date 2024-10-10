
//Nigel Denish
//CT101/G/21623/24


//for loop prompt values when to start and atop
#include <stdio.h>
int main(){
	int start=0;
	int stop=50;
	int sum=0;

	printf("enter to start:");
	scanf("%d", &start);
	printf("enter to stop:");
	scanf("%d", &stop);

	for(int i=start;i<=stop;i++){
		printf("%d\n" ,i);
		sum+=i;
		}
		printf("sum is:%d\n",sum);
	return 0;
}
