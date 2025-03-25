#include<stdio.h>
int main() {
	int a[11];
	int i;
	double x,b=0;

	for(i=0;i<10;i++) {
		scanf("%d",&a[i]);
		b+=a[i];
	}
	x=b/10;
	printf("%.2lf",x);
	
}