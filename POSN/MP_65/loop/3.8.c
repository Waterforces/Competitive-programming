#include<stdio.h>
#include<math.h>
int main() {
	int a,b,i;
	scanf("%d",&a);
	for(i=1;i<=a;i++) {
		b=pow(2,i);
		printf("%d\t%d\n",i,b);
	}
}