#include<stdio.h> 
#include<string.h>
#include<ctype.h>
int main() {
	char str[1000];
	int x,i=0,a=0,u=0,e=0,o=0,j;
	printf("Input Strings  ==>");
	scanf("%s",str);
	x=strlen(str);
	printf("Lenght of String ==> %d\n",x);
	printf("Reverse String ==> %s\n",strrev(str));
	for(j=0;j<x;j++) {
		str[j]=toupper(str[j]);
	}
	printf("Upper String ==> %s\n",str);
	printf("=-=-=-=-=-=-=-=-=\n");
	printf("Number of vowels\n");
	printf("=-=-=-=-=-=-=-=-=\n");
	for(j=0;j<x;j++) {
		if(str[j]=='A' || str[j]=='a') {
			a++;
		} 
		else if(str[j]=='E' || str[j]=='e') {
			e++;
		}
		else if(str[j]=='I' || str[j]=='i') {
			i++;
		}
		else if(str[j]=='O' || str[j]=='o') {
			o++;
		}
		else if(str[j]=='U' || str[j]=='u') {
			u++;
		}
	}
	printf("A or a = %d\n",a);
	printf("E or e = %d\n",e);
	printf("I or i = %d\n",i);
	printf("O or o = %d\n",o);
	printf("U or u = %d\n",u);
	printf("=-=-=-=-=-=-=-=");
}