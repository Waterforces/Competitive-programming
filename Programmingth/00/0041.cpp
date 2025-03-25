#include<bits/stdc++.h>
using namespace std;
int n;
double ans; 

int main() {
    cin >> n;
    if(n==1) ans=2;
    else if(n==3) ans=2+sqrt(3);
    else if(n%2) ans=n-3+(2*sqrt(3));
    else ans=n;
    cout << fixed << setprecision(6) << ans;
}