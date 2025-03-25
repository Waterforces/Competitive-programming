#include<bits/stdc++.h>
using namespace std;
int n;

int main() {
    while(cin >> n) {
        if(n<=0) return 0;
        for(int i=1;i<=n;i++) {
            if(i==n) cout << n%10;
            else if(i%5==0) cout << "X";
            else cout << "*";
        }
        cout << "\n";
    }
}