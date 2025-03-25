#include<bits/stdc++.h>
using namespace std;
int a,tmp=1;

int main() {
    cin >> a;
    for(int i=0;i<a;i++) {
        int n;
        cin >> n;
        if(n>tmp) {
            // cout << "A";
            int x=n-tmp;
            if(x>10) cout << tmp << " . . . " << n << "\n";
            else {
                // cout << n << endl;
                for(int j=tmp;j<=n;j++) cout << j << " ";
                cout << "\n";
            }
        }
        else {
            int x=tmp-n;
            if(x>10) cout << tmp << " . . . " << n << "\n";
            else {
                for(int j=tmp;j>=n;j--) cout << j << " ";
                cout << "\n";
            }
        }
        tmp=n;
    }
}