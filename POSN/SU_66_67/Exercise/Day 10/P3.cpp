#include<bits/stdc++.h>
using namespace std;
int n,m,a[100005];

int main() {
    cout << "Enter the value of the n = ";
    cin >> n;
    cout << "Enter the numbers\n";
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    cout << "Cyclically swap numbers\n";
    for(int i=1;i<n;i+=2) cout << a[i] << "\n";
    for(int i=n-2;i>=0;i-=2) cout << a[i] << "\n";
}