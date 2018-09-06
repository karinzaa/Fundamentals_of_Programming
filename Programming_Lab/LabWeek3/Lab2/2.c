#include<stdio.h>
#include<stdbool.h>
int i;
int main(void){
	int score[3],sum=0;
	bool cout1 = true, cout2 = true;
	for(i=0; i<3; i++){
		scanf(" %d",&score[i]);
		sum += score[i];
		if(score[i]<0) cout1 = false;
	}
	if(score[0]>30){
		printf("the quiz score should less than or equal to 30.\n");
		cout2 = false;
	}
	if(score[1]>35){
		printf("the quiz score should less than or equal to 35.\n");
		cout2 = false;
	}
	if(score[2]>35){
		printf("the quiz score should less than or equal to 35.\n");
		cout2 = false;
	}
	if(cout1!=false&&cout2!=false){
		if(sum>=90) printf("You have got: A");
		else if(sum<90&&sum>=80) printf("You have got: B");
		else if(sum<80&&sum>=70) printf("You have got: C");
		else if(sum<70&&sum>=60) printf("You have got: D");
		else printf("F");
	}
	else if(cout2==true) printf("The score is invalid.");
	return 0;
}
