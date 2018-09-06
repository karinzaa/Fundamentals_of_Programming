#include<stdio.h>
float up(float x){
	float paid;
	if(x<=100) return x;
	else if(x>100&&x<=300) return 100 + 0.75*(x-100);
	else if(x>300&&x<=600) return 250 + 0.50*(x-300);
	else return 400 + 0.25*(x-600);
}
int main(void){
	long id;
	char name[30];
	float unit,charge,total;
	printf("Input Customer ID : ");
	scanf("%il",&id);
	printf("Input the name of the customer : ");
	scanf("%s",name);
	printf("Input the unit(mins) consumed by the customer : ");
	scanf("%f",&unit);
	total = up(unit);
	if(total>300){
		charge = total*0.15;
		total += charge;
	}
	printf("\nTelephone Bill\n");
	printf("Customer ID NO\t\t: %d\n",id);
	printf("Customer Name\t\t: %s",name);
	printf("\nUnit Consumed (Mins)\t: %.2f\n",unit);
	printf("Surchage Amount (15)\t: %.2f\n",charge);
	printf("Net Amount Paid\t\t: %.2f\n",total);
	return 0;
}
