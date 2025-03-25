#include<bits/stdc++.h>
using namespace std;
int n,m,day=1,a[10005],sum;

int main() {
    cin >> n >> m;
    for(int i=0;i<m;i++) cin >> a[i];
    int t=n*100;
    for(int i=0;i<m;i++) {
        // cout << a[i] << " " << t << "\n";
        if(a[i]<=t) {
            cout << day << "\n";
            t-=a[i];
            a[i]=0;
        }
        else {
            while(a[i]>t) {
                // cout << a[i] << "\n";
                a[i]-=t;
                t=n*100;
                day++;
            }
            // cout << a[i] << "\n";
            t-=abs(a[i]);
            cout << day << "\n";
        }
    }
}