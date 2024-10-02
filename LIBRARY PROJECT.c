/*
NIGEL DENISH
CT101\G\21623\24
*\


#include<stdio.h>
int main(){
	int Book_id;
	int Return_Date;
	int Charges;
	int Days_Overdue;
	int Due_Date;
	int rate;
	
	//user input
	printf("Enter book ID");
	scanf("%d",&Book_id);
	printf("Enter Due_Date, date=YYYYMMDD");
	scanf("%d",&Due_Date);
	printf("Enter Return_Date , date=YYYYMMDD");
	scanf("%d",&Return_Date);
	
	// days overdue
	Days_Overdue=Return_Date-Due_Date;
	
	//calculation for charges
	if(Days_Overdue<=7){
		Charges=20*Days_Overdue;
		rate=20;
	}
	else if (Days_Overdue>=8&Days_Overdue<=14){
		Charges=50*Days_Overdue;
		rate=50;
	}
	else{
		Charges=100*Days_Overdue;
		rate=100;
	}
	//user output after the whole calculation
	printf("The Book_id is: \t%d\n",Book_id);
	printf("The Due_Date is:\t%d\n",Due_Date);
	printf("The Return_Date is:\t%d\n",Return_Date);
	printf("The Days_Overdue is:\t%d\n",Days_Overdue);
	printf("The Fine Amount is:\t%d\n",Charges);
	printf("The rate is:\t%d\n",rate);
	
//termination of the main function
    return 0;
	 
}