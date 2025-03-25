#include<stdio.h>
int main() {
	int a;
	scanf("%d",&a);
	int num[a],i,max,min;
	float comb=0;
	max=min=num[0];
	for(i=0;i<a;i++) {
		scanf("%d",&num[i]);
		if(num[i] >= 0 && num[i] <= 100) {
			if(max < num[i]) {
				max=num[i];
			}
			else if(num[i] < min) {
				min=num[i];
			}
			comb+=num[i];
		}
		else {
			printf("Invalid input");
		}
	}
	printf("Max= %d\n",max);
	printf("Min= %d\n",min);
	printf("Combine= %.2f\n",comb);
	printf("Average= %.2f\n",comb/a);
}
