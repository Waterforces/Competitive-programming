#include<stdio.h>
int main() 
{
	int a[10],i,b=0;
	for(i=0;i<10;i++) {
		scanf("%d",&a[i]);
		if(40%a[i]==0) {
			b++;
		}
	}
	printf("%d",b);
}