#include<bits/stdc++.h>
using namespace std;
int n;

int main() {
    cin >> n;
    for(int i=1;i<=n*2-1;i++) {
        if(i>1) cout << "\n";
        for(int j=1;j<=n*2-1;j++) {
            if(j==1 || j==n*2-1) cout << "#";
            else if(i==j) cout << "#";
            else cout << " ";
        }
    }
}