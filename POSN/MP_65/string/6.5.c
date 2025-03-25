#include<stdio.h>
int main() {
	char let[14],str[18];
	int i,j;
	gets(let);
	for(i=0,j=0;i<13;i++,j++) {
		if(i==1 || i==6 || i==10 || i==12) {
			str[j]='-';
			str[++j]=let[i];
		}
		else {
			str[j]=let[i];
		}
	}
	puts(str);
}