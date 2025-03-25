#include<bits/stdc++.h>
using namespace std;
int a,in,out,n;
int c,_c;
int main() {
    do {
        cin >> a;
        if(a==1) {
            cin >> n;
            in+=n;
            c++;
        }
        else if(a==2) {
            cin >> n;
            out +=n;
            _c++;
        }
        else if(a==0) break;
    }
    while(true);
    cout << c << " " << _c;
    cout << endl << in << " " << out << " " << in-out;
}
