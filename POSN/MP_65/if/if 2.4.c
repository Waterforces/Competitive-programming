#include<stdio.h>
int main() {
	int a,b,x;
	printf("Please enter mid-term score: ");
	scanf("%d",&a);
	printf("Please enter final-term score: ");
	scanf("%d",&b);
	x=(a+b)/2;
	printf("Your score= %d %%\n",x);
	if(x >= 80) {
		printf("Grade= G,Good");
	} 
	else if(x >= 50) {
		printf("Grade= P,Pass");
	}
	else {
		printf("Grade= F,Fail");
	}
}