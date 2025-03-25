#include<bits/stdc++.h>
using namespace std;
int x;
int sum,ans;
int main() {
    cin >> x;
    for(int i=0;i<7;i++) {
        int a;
        cin >> a;
        sum+=a;
    }
    int c=sum;
    if(c>250) {
        ans+=(c-250)*60;
        c=250;
    }
    if(c>100) {
        ans+=(c-100)*70;
        c=100;
    }
    ans+=c*80;
    sum*=x;
    cout << ans << endl << sum << endl;
    if(sum<=ans) {
        cout << "No Profit";
    }
    else {
        cout << sum-ans;
    }
}
