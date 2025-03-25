#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
int n,a[105];

int main() {
    cin >> n;
    for(int i=1;i<=n;i++) {
        int q;
        cin >> q;
        a[i]=a[i-1]+q;
    }
    for(int i=1;i<=n;i++) cout << a[i] << " ";
}