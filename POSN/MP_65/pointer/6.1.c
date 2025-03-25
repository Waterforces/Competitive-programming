#include<stdio.h>
int main() {
	int arr[10];
	int *p,i,b=0;
	for(i=0;i<10;i++) {
		p=&arr[i];
		scanf("%d",&*p);
		b+=arr[i];
	}
	printf("%d",b);
}