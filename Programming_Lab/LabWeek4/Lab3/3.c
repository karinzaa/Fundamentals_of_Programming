#include<stdio.h>
int main(void){
	double number;
	input:
		{
			printf("Enter a number:");
 			scanf("%lf",&number);
 			if(number < 0.0){
 				printf("number is negative\n");
 				goto input;
			 }
			else{
				printf("number is positive");
			}
		}
 	return 0;
}
