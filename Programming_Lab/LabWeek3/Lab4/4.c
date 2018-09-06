#include<stdio.h>
#include<stdbool.h>
int main(void){
	int in,oh=0,fh=0,tt=0;
	bool c=true;
	scanf("%d",&in);
	while(in>0){
		if(in>=100){
			if(in>=500){
				if(in>=1000){
					tt++;
					in-=1000;
				}
				else{
					fh++;
					in-=500;
				}
			}
			else{
				oh++;
				in-=100;
			}
		}
		else{
			c = false;
			printf("Sorry.. the amounts you insert are not possible to withdrawn.");
			break;
		}
	}
	if(c==true){
		printf("Summary of banknotes:\n");
		printf("%d notes of 1000 bath\n",tt);
		printf("%d notes of 500 bath\n",fh);
		printf("%d notes of 100 bath",oh);
	}
	return 0;
}
