#include<bits/stdc++.h>
using namespace std;
int n;
int main() {
    cin >> n;
    int m=n;
    if(n%2==0) m=n-1;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            if(j==((m/2+m%2)-i+1)) cout << "*";
            else if(j==((m/2+m%2)+i-1)) cout << "*";
            else if(j==i-(n/2+n%2)+n%2) cout << "*";
            else if(j==n+(n/2+n%2)-i) cout << "*";
            else cout << "-";
        } cout << endl;
    }
}