#include<bits/stdc++.h>
using namespace std;
int n;

int main() {
    cin >> n;
    for(int i=2;i<=n;i++) {
        int cou=0;
        for(int j=1;j<=i;j++) {
            if(i%j==0) cou++;
        }
        if(cou==2) cout << i << "\n";
    }
}