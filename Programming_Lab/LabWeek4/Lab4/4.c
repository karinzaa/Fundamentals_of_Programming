#include<stdio.h>
int main(void){
	int a;
	char c;
	scanf("%d",&a);
	if(a<=4){
		c =	a==1 ? 'a'
			:a==2 ? 'b'
			:a==3 ? 'c'
			:a==4 ? 'd'
			: 0;
		printf("You have ordered: ");
		switch(c){
			case 'a' :{
				printf("Coke");
				break;
			}
			case 'b' :{
				printf("Est Cola");
				break;
			}
			case 'c' :{
				printf("Oishi Green Tea");
				break;
			}
			case 'd' :{
				printf("Sprite");
				break;
			}
		}
	}
	else printf("Invalid drink number!");
	return 0;
}

