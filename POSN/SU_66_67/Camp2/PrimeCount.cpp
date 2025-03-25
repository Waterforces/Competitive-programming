#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll c,n;
bool b[6000005];
int main() {
    cin >> n;
    for(int i=2;i<=n;i++) {
        if(b[i]==0) {
            c++;
            for(int j=i*2;j<=n;j+=i) {
                b[j]=1;
            }
        }
    }
    cout << c;
}
