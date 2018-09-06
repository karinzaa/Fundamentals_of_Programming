#include<stdio.h>
#define f(x,y) for(i=x; i<y; i++)
int i;
int A(void){
	char x[4]={'b','c','d'};
	printf("The first letter of the alphabet is %c", 'a');
	printf("\nThe decimal code for this letter is %d", 'a');
	printf("\nThe code for an uppercase %c is %d\n", 'A', 'A');
	f(0,3){
		printf("My letter#%d is %c",i+1,x[i]);
		printf("\nThe decimal code for this letter is %d", x[i]);
		printf("\nThe code for an uppercase %c is %d\n",x[i]-32, x[i]-32);
	}
	return 0;
}
int B(void){
	printf("The first letter of the alphabet is %c", 'a');
	printf("\nThe decimal code for this letter is %d", 'a');
	printf("\nThe code for an uppercase %c is %d\n", 'A', 'A');
	
	printf("My letter#1 is %c", 'b');
	printf("\nThe decimal code for this letter is %d", 'b');
	printf("\nThe code for an uppercase %c is %d\n", 'B', 'B');
	
	printf("My letter#2 is %c", 'c');
	printf("\nThe decimal code for this letter is %d", 'c');
	printf("\nThe code for an uppercase %c is %d\n", 'C', 'C');
	
	printf("My letter#3 is %c", 'd');
	printf("\nThe decimal code for this letter is %d", 'd');
	printf("\nThe code for an uppercase %c is %d\n", 'D', 'D');
	
	return 0;
}
int main(void){
	A();
	printf("-----------------------------------------------------------------------------------------------------------------------\n");
	B();
}
