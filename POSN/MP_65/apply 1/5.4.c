#include<stdio.h>
#include<math.h>
int main() {
	int a,i,j,b;
	scanf("%d",&a);
	for(i=1;i<=a;i++) {
		for(j=1;j<=i;j++) {
			//b=pow(i,j);
			printf("%d ",i*j);
		}
		printf("\n");
	}
}