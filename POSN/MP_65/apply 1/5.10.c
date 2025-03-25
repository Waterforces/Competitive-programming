#include<stdio.h>
int main() {
    int a,i,j;
    char let='A';
    scanf("%d",&a);
    for(i=1;i<=a;i++) {
        for(j=1;j<i;j++) {
            printf("%c",let);
            let++;
            if(let>'Z') {
                let='A';
            }

        }
        printf("%c\n",let);
        let++;
    }
}
