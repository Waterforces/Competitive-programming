#include<stdio.h>
int main() {
	int a[6],i,b=0,c=0;
	for(i=0;i<5;i++) {
		scanf("%d",&a[i]);
		if(a[i]%2==0) {
			b++;
		}
		else {
			c++;
		}
	}
	printf("Even number= %d\n",b);
	printf("Odd number= %d",c);
}