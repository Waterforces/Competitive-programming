#include<stdio.h>
int day(int m,int y) {
	if((y%4)-3==0) {
		if(m==2) {
			printf("29");
		}
	}
	else {
		if(m==2) 
		printf("28");
	}
	if(m==4 || m==6 || m==9 || m==11) {
		printf("30");
	}
	else if(m!=2){
		printf("31");
	}
}
int main() {
	int m,y;
	scanf("%d %d",&m,&y);
	day(m,y);
}