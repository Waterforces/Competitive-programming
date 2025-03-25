#include<stdio.h>
#include<string.h>
int main() {
	char s1[20],s2[16];
	int i,j;
	gets(s1);
	for(i=0,j=0;i<15;i++,j++) {
		if(s1=='-') {
			s1[j+1]=s2[i];
			j++;
		}
		else {
			s1[j]=s2[i];
		}
	}
	printf("%s",s2);
}