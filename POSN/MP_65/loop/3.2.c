#include<stdio.h>
int main() {
	int a[11];
	int i,b,c;
	for(i=0;i<10;i++) {
		scanf("%d",&a[i]);
		b=c=a[0];
		if(a[i] > b) {
			b=a[i];
		}
		else if(a[i] != b){
			c=a[i];
		}
	}
	printf("Max is %d\n",b);
	printf("Min is %d",c);
}