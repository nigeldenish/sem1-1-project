/*
NIGEL DENISH
CT101/G/21623/24
*\





#include<stdio.h>
int main(){
	int age;
	int income;
	//user input
	printf("please enter you age:");
	scanf("%d",&age);
	printf("please enter you income:");
	scanf("%d",&income);
	//condition for loan

	if (age>=21&income>=21000){
		printf("Congratulations you qualify for loan");
	}
	else{
		printf("Unfortunately we are unable to offer you a loan at the time");
	}
    // return 0 is used to close the main function
    return 0;

}
