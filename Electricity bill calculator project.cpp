/*Nigel Denish
CT101/G/21623/24
*\


//calculation of elaectricity Bill calculator
#include <stdio.h>
int main(){
	int customerID;
	int unitsConsumed;
	char customerName[50];
	float chargePerUnit,totalBill,surchage=0.0;
	
	printf("Enter customerID:");
	scanf("%d",&customerID);
	
	printf("Enter customerName:");
	scanf("%s",&customerName);
	
	printf("Enter unitsConsumed:");
	scanf("%d",&unitsConsumed);
	
	//First condition to be applied
	if(unitsConsumed<=199){
	chargePerUnit=1.20;	
	}else if(unitsConsumed>=200&&unitsConsumed<400){
	chargePerUnit=1.50;
	
	}else if(unitsConsumed>=400&&unitsConsumed<600){
	chargePerUnit=1.80;	
	}else{
		chargePerUnit=2.00;
	}
	//Total bill formula
	totalBill=unitsConsumed*chargePerUnit;
	//the surchage condition:if the units are more than 400 then the surchsge of 0.15 of the total bill should be added to the total bill
	if(totalBill>400){
		surchage=totalBill*0.15;
	}
	//Second condition to be applied
	if(totalBill<100){totalBill=100;
	}else{
		totalBill+=surchage;//the surchage added to the total bill but if only the units are more than 400
	}
	
	//final output
	printf("\nElectricity Bill\n");
	printf("customerID:%d\n",customerID);
	printf("customerName:%s\n",customerName);
	printf("unitsConsumed:%d\n",unitsConsumed);
	printf("chargePerUnit:%.2fkshs\n",chargePerUnit);
	printf("Total amount to pay:%.2Fkshs\n",totalBill);
	
	return 0;
	
	
	}