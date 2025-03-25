#include<stdio.h>
int main() {
	int arr[3],i=0,j,max,num;
	scanf("%d %d %d",&arr[0],&arr[1],&arr[2]);
	while (arr[0]!=1 || arr[1]!=1 || arr[2]!=1) {
		num=arr[0];
		max=0;
		for(j=0;j<3;j++) {
			if(arr[j]>num) {
				max=j;
				num=arr[j];
			}
		}
		if(arr[max]%2==1) {
			--arr[max];
		}
		arr[max]/=2;
		i++;
	//	printf("%d %d %d\n",arr[0],arr[1],arr[2]);
	}
	printf("%d", i);
}