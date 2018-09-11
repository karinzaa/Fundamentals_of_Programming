#include<stdio.h>
int main(void){
	int a[3],i;
	int max =0; 
	for(i=0; i<3; i++){
		scanf(" %d",&a[i]);
		switch(i){
			case 0:{
				max = a[i];
				break;
			}
			case 1:{
				goto inside;
				break;
			}
			case 2:{
				goto inside;
				break;
			}
		}
		inside:{
			switch(max<a[i]){
				case 1 :{
					max = a[i];
					break;
				}
			}
		}
	}
	printf("Max number is %d",max);
}
