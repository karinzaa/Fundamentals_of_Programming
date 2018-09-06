#include<stdio.h>
float CtI(float x){
	return x/2.54;
}
float ItC(float x){
	return x*2.54;
}
int main(void){
	float in;
	char t;
	scanf("%f %c",&in,&t);
	switch(t){
		case 'i' : printf("%.2f inch = %.2f cm\n",in,ItC(in));
		break;
		case 'c' : printf("%.2f cm = %.2f inch",in,CtI(in));
		break;
	}
	return 0;
}
