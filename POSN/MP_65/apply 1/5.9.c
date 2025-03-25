#include<stdio.h>
int main() {
    int a;
    printf("Enter : ");
    scanf("%d",&a);
    int i,j;
    for(i=1;i<=a;i++) {
        for(j=1;j<i;j++) {
            printf(" ");
        }
        printf("\\");
        for(j=a;j>=i;j--) {
            printf(" ");
        }
        for(j=a;j>i;j--){
            printf(" ");
        }
        printf("/");
        printf("\n");
    }
}
