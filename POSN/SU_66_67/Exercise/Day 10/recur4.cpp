#include<bits/stdc++.h>
using namespace std;

void binary(int x) {
    if(x==0) return ;
    binary(x/2);
    cout << x%2;
}

int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++) {
        int a;
        cin >> a;
        binary(a);
        cout << "\n";
    }
}