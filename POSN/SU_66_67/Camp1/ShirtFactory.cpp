#include<bits/stdc++.h>
using namespace std;
int sum,n,all;

int main() {
    cin >> n;
    for(int i=0;i<7;i++) {
        int a;
        cin >> a;
        sum+=a;
    }
    // cout << sum << "\n";
    int sell=n*sum;
    if(sum>=250) {
        all+=(sum-250)*60;
        sum=250;
    }
    if(sum>=100) {
        all+=(sum-100)*70;
        sum=100;
    }
    all+=sum*80;
    cout << all << "\n" << sell << "\n";
    if(all-sell<0) cout << sell-all;
    else cout << "No Profit";
}