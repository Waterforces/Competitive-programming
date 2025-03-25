#include<stdio.h>
int main() {
    int a,i,j;
    printf("Enter : ");
    scanf("%d",&a);
    for(i=1;i<=a;i++) {
        for(j=a;j>i;j--) {
            printf(" ");
        }
        printf("1");
        for(j=2;j<=i;j++) {
            printf("%d",j);
        }
        j-=2;
     //   printf("\n");
        while(j>1) {
            printf("%d",j);
            j--;
        }
        if(i!=1) {
            printf("1");
        }
        printf("\n");
    }
}
