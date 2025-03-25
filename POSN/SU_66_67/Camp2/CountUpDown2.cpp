#include<bits/stdc++.h>
using namespace std;
int a,n,c=1;
int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        int a;
        cin >> a;
        if(a-c>10) cout << c << " " << c+1 << " " << c+2 << " . . . " << a-2 << " " << a-1 << " " << a;
        else if(c-a>10) cout << c << " " << c-1 << " " << c-2 << " . . . " << a+2 << " " << a+1 << " " << a;
        else  if(c>a) {
            for(int i=c;i>=a;i--) {
                cout << i << " ";
            }
        }
        else {
            for(int i=c;i<=a;i++) {
                cout << i << " ";
            }
        }
        c=a;
        cout << endl;
    }
}
