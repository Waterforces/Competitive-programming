#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
int n,k,cnt;
vector<int> a;

int main() {
    cin >> n;
    a.resize(n+1);
    for(int i=1;i<=n;i++) {
        int q;
        cin >> q;
        a[i]=a[i-1]+q;
    }
    int k,i=1,j=0;
    cin >> k;
    for(int i=1;i<=n;i++) {
        if(a[i]==k) cnt++;
    }
    for(int i=1,j=0;j<n;) {
        cout << i << " " << j << endl;
        cout << a[i] << " " << a[j] << " " << cnt << endl;
        if(a[i]-a[j]==k) cnt++;
        else if(a[i]-a[j]>k) {
            j++;
            continue ;
        }
        if(i<n) i++;
        if(i>=n) j++;
    }
    cout << cnt;
}