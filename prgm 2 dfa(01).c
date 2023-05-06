#include<stdio.h>
int main(){
	int state=0;
	char input;
	printf("enter the string: ");
	while((input=getchar())!='\n'){
		switch(state){
			case 0:
				if(input=='0'){
					state=1;
				}
				else{
					state=-1;
				}
				break;
			case 1:
				if(input=='0'){
					state=1;
				}
				else if(input=='1'){
					state=2;
				}
			
				else{
					state=-1;
				}
				break;
			case 2:
				if(input=='0'||input=='1'){
					state=2;
				}
				else{
					state=-1;
				}
				break;
		}
		if(state==-1){
			break;
		}
	}
	if(state==2){
		printf("string is accepted");
	}
	else{
		printf("string is not accepted");
	}
	return 0;
}
