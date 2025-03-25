#include<stdio.h>
#include<stdbool.h>
bool fl[100];
int b[100];
int main(void) {
    int m;
    scanf("%d",&m);
    int a[m];
    for(int i=0;i<m;i++) {
        scanf("%d",&a[i]);
        if(fl[a[i]]==false) {
            fl[a[i]]=true;
            b[a[i]]++;
        }
    }

}
