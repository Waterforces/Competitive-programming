#include<stdio.h>
int fi(int a) {
    int b;
    if(a==1 || a==2) {
        return 1;

    }
    else {

        return (fi(a-2)+fi(a-1));
    }
}
int main() {
    int a;
    scanf("%d",&a);
    int i;
    for(i=1;i<=a;i++) {
    printf("%d ",fi(i));
    }

}
// 1 1 2 3 5

