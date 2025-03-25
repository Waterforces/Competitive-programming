#include<stdio.h>
int main(void) {
	int m,n;
	scanf("%d",&m);
	int a[m];
	for(int i=0;i<m;i++) {
		scanf("%d",&a[i]);
	}
	for(int i=0;i<m;i++) {
		for(int j=0;j<m;j++) {
			if(a[i]<a[j]) {
				n=a[j];
				a[j]=a[i];
				a[i]=n;
			}
		}
	}
	if(a[0]==0) {
		for(int i=0;i<m;i++) {
			if(a[i]!=0) {
				a[0]=a[i];
				a[i]=0;
				break;
			}
			if(a[0]!=0) break;
		}
	}
 	for(int i=0;i<m;i++) {
		printf("%d",a[i]);
	}
}