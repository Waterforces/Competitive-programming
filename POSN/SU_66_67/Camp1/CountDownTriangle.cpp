#include<bits/stdc++.h>
using namespace std;
int n;

int main() {
    cin >> n;
    int tmp=n;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(i<=j) cout << tmp%10;
            else cout << " ";
        }
        tmp--;
        cout << "\n";
    }
}