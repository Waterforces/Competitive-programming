#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+5;
int n,tmp,sum,a[N];

int main() {
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    tmp=a[0];
    for(int i=0;i<n;i++) {
        if(a[i]>a[i+1]) {
            sum+=a[i]-tmp;
            tmp=a[i+1];
        }
    }
    cout << sum;
}