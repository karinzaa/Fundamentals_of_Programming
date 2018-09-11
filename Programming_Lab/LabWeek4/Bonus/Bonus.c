#include<stdio.h>
int main(void){
	char sym;
	float a,b;
	again:
		{
			printf("Select an operator either (+,-,*,/): ");
			scanf(" %s",&sym);
		}
	if(sym!='+'&&sym!='-'&&sym!='*'&&sym!='/') goto again;
	printf("Enter two numbers: ");
	scanf("%f %f",&a,&b);
	printf("%.2f %c %.2f = ",a,sym,b);
	switch(sym){
		case '+':{
			printf("%.2f",a+b);
			break;
		}
		case '-':{
			printf("%.2f",a-b);
			break;
		}
		case '*':{
			printf("%.2f",a*b);
			break;
		}
		case '/':{
			printf("%.2f",a/b);
			break;
		}
		
	}
}
