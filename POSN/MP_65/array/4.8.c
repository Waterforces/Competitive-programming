#include<stdio.h>
int main() {
	int a[20],i,c=0;
	for(i=0;i<20;i++) {
		scanf("%d",&a[i]);
		if(a[i]%2==1) {
			c+=a[i];
		}
	}
	printf("%d",c);
}