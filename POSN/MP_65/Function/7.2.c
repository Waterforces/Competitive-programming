#include<stdio.h> 
int mut(int a,int b) {
	int m;
	m=a*b;
	return m;
}
int main() {
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",mut(a,b));
}