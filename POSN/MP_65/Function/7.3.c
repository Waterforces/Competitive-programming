#include<stdio.h>
int prime(int a) {
	int i,c=0;
	for(i=1;i<=a;i++) {
		if(a%i==0) {
			c++;
		}
	}
	if(c==2) {
		printf("YES");
	}
	else {
		printf("NO");
	}
}
int main() {
	int a;
	scanf("%d",&a);
	prime(a);
}