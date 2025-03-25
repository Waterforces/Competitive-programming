#include<stdio.h>
int main() {
	int a,b=0,c,i,j;
	scanf("%d",&a);
	for(i=1;i<=a;i++) {
		for(j=1;j<=i;j++) {
			if(i%j==0) {
				b++;
			}	
		}
		if(b==2) {
			printf("%d ",i);
		}
		b=0;
	}
}