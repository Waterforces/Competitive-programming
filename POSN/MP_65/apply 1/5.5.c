#include<stdio.h>
int main() {
    int num,i,j;
    char let;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(i=1;i<=num;i++) {
            let='A';
        for(j=1;j<=i;j++) {
            printf("%c",let);
            let++;
        }
        printf("\n");
    }
}
