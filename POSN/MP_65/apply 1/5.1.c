#include<stdio.h>
int main() {
    int a,i,x=1;
    scanf("%d",&a);
    for(i=2;i<=a;i++) {
        x*=i;
    }
    printf("%d",x);
}
