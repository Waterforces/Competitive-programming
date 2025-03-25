#include<bits/stdc++.h>
#define ll long long 
using namespace std;
ll n,ans,i=1;
 
int main() {
    cin >> n;
    while(pow(5,i)<=n) {
        ans+=(n/pow(5,i));
        i++;
    }
    cout << ans;
}