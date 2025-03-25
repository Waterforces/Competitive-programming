#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll n,a,b;
 
int main() {
    cin >> n;
    while(n-->0) {
        cin >> a >> b;
        if(a==b) cout << a*a-a+1 << "\n";
        else if(a>b) {
            if(a%2==0) cout << a*a-b+1 << "\n";
            else cout << (a-1)*(a-1)+b << "\n";
        }
        else {
            if(b%2==0) cout << (b-1)*(b-1)+a << "\n";
            else cout << b*b-a+1 << "\n";
        }
    }
}