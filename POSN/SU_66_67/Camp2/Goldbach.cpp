#include<bits/stdc++.h>
#define ll long long unsigned
using namespace std;
int main() {
    while(true) {
        ll a;
        cin >> a;
        if(a==0) return 0;
        ll n=a*a-a+1;
        //n=a;
        if(n%2==0) cout << "N\n";
        else cout << "Y " <<  n << endl;
    }
} 