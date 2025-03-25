#include<stdio.h>
int main() {
	char a[11],b[11];
	char *p;
	gets(a);
	for(int i;i<10;i++) {
		p=&a[i];
	//	i--;
		b[i]=*p;
	printf("%c %c\n",a[i],b[i]);	
	}
//	printf("%s %s",a,b);
}