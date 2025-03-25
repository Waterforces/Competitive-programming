#include<bits/stdc++.h>
using namespace std;
int n,a[8],far=INT_MAX,ans;

int main() {
    cin >> n;
    for(int i=0;i<8;i++) cin >> a[i];
    sort(a,a+8);
    if(n<0) {
        for(int i=0;i<8;i++)  {
            if(a[i]==n) {
                cout << n;
                return 0;
            }
            if(abs(a[i]-n)<far) {
                far=abs(a[i]-n);
                ans=a[i];
            }
        }
        cout << ans;
        return 0;
    }
    for(int i=0;i<8;i++)  {
        if(a[i]==n) {
            cout << n;
            return 0;
        }
        if(abs(n-a[i])<far) {
            far=abs(n-a[i]);
            ans=a[i];
        }
    }
    cout << ans;
}