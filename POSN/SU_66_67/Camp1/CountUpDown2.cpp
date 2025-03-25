#include<bits/stdc++.h>
using namespace std;
int n,tmp=1;

int main() {
    cin >> n;
    for(int I=0;I<n;I++) {
        int a;
        cin >> a;
        if(a>tmp) {
            if(a-tmp>10) cout << tmp << " " << tmp+1 << " " << tmp+2 << " . . . " << a-2 << " " << a-1 << " " << a << "\n";
            else {
                for(int i=tmp;i<=a;i++) cout << i << " ";
                cout << "\n";
            }
        }
        else {
            if(tmp-a>10) cout << tmp << " " << tmp-1 << " " << tmp-2 << " . . . " << a+2 << " " << a+1 << " " << a << "\n";
            else {
                for(int i=tmp;i>=a;i--) cout << i << " ";
                cout << "\n";
            }
        }
        tmp=a;
    }
}