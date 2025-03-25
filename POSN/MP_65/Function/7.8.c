#include<stdio.h>
char ans(char a) {
	if(a=='y' || a=='Y') {
		printf("YES");
	}
	else {
		printf("NO");
	}
}
int main( ) {
	char a;
	scanf("%c",&a);
	ans(a);
}