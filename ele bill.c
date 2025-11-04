#include<stdio.h>
int main( )
{
	int units;
	float amount,charge,total,bill;
	printf("enter total units consumed");
	scanf("%d",&units);
	if(units<=100){
		amount=units*1.5;
		charge=30;
	}
	else if(units<=200)
	{
		amount=units*2.5;
		charge=50;
	}
	else if(units<=300)
	{
		amount=units*3.5;
		charge=75;
	}
	else if(units<=400)
	{
		amount=units*5.00;
		charge=100;
	}
	else{
		amount=units*7.00;
		charge=125;
	}
	total=amount+charge;
	printf("bill=%.2f",bill);
	return 0;
}
