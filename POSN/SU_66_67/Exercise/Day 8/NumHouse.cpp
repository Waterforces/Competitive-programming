#include<bits/stdc++.h>
using namespace std;
int n,m,a[10];

int main() {
    cin >> n >> m;
    for(int i=n;i<=m;i++) {
        int tmp=i;
        while(tmp>9) {
            a[tmp%10]++;
            tmp/=10;
        }
        a[tmp]++;
    }
    for(int i=0;i<10;i++) cout << i << " = " << a[i] << "\n";
}