#include<bits/stdc++.h>
using namespace std;

int a[30][3];
int x=1,y=1,z,X=1,Y=1,Z;
void run() {
    for(int i=1;i<=24;i++) {
        x=X;
        y=Y;
        z=Z;
        Y+=(z+x);
        Z+=(y-z);
        a[i][0]=X;
        a[i][1]=Y;
        a[i][2]=Z;
    }
/*    for(int i=1;i<=n;i++) {
        cout << a[i][0] << " " << a[i][1] << " " << a[i][2] << endl;
    }*/
}
int n;
int main() {
    run();
    while(n!=-1) {
        cin >> n;
        cout << a[n][1] << " " << a[n][0]+a[n][1]+a[n][2] << endl;
    }
}