#include<bits/stdc++.h>
using namespace std;
int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int sum,n,m,x,y;
int main() {
    cin >> n >> x >> m >> y;
    if(x>y || n>a[x] || m>a[y] || (x==y && n>m)) {
        cout << "error";
        return 0;
    }
    if(x==y) {
        cout << m-n+1;
        return 0;
    }
    for(int i=x+1;i<y;i++) {
        sum+=a[i];
    }
    sum+=a[x]-n+1;
    sum+=m;
    cout << sum;
}
