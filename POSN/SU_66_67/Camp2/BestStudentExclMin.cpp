#include<bits/stdc++.h>
using namespace std;
int a[10];
int sum[1005];
int n,m;
int _max;
string s[1005];
int main() {
    cin >> n >> m;
    for(int i=0;i<n;i++) {
        cin >> s[i];
        for(int j=0;j<m;j++) {
            cin >> a[j];
            sum[i]+=a[j];
        }
        sort(a,a+m);
        sum[i]-=a[0];
        _max=max(_max,sum[i]);
    }
    cout << _max << endl;
    for(int i=0;i<n;i++) {
        //if(i>0) cout << endl;
        if(_max==sum[i]) cout << s[i] << endl;
    }
}
