#include<bits/stdc++.h>
using namespace std;
int n,k;
vector<int> v;
int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    cin >> k;
    if(k>0) {
        for(int i=0;i<n;i++) {
            cout << v[i]+k << " ";
        }
    }
    else {
        for(int i=n-1;i>=0;i--) {
            cout << v[i]+k << " ";
        }
    }
}
