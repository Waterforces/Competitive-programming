#include<bits/stdc++.h>
using namespace std;
int a[11];

int main() {
    for(int i=0;i<10;i++) {
        int n;
        cin >> n;
        a[n]++;
    }
    for(int i=1;i<=10;i++) {
        if(a[i]>0) cout << i << "\n";
    }
}