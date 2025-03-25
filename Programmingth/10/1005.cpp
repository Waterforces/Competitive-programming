#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n,a[2505],_max=0,st=0,en=0;
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) {
        int sum=0;
        for(int j=i;j<n;j++) {
            sum+=a[j];
            if(sum>_max) {
                _max=sum;
                st=i; en=j;
            }
        }
    }
    if(_max<=0) cout << "Empty sequence";
    else {
        for(int i=st;i<=en;i++) cout << a[i] << " "; 
        cout << "\n" << _max;
    }
}