#include<stdio.h>
int main() {
    int num,i,j,x,y;
    printf("Enter : ");
    scanf("%d",&num);
    for(i=0;i<num;i++) {
            x=i-1;
        for(j=num;j>i;j--) {
            printf(" ");
        }
        printf("%d",i);
        for(j=1;j<=i;j++) {
            printf("%d",x--);
        }
        x+=2;
        for(j=0;j<i;j++) {
            printf("%d",x++);
        }
        printf("\n");
    }
}
