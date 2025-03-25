#include<bits/stdc++.h>
using namespace std;
int n;
int _max,c,v=INT_MAX;
int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        int a;
        cin >> a;
        if(a>v) {
            //cout << v << " " << c << " " << a << endl;
            c++;
            v=a;
        }
        else {
            _max=max(_max,c);
            v=a;
            //cout << c << " " << a << endl;
            c=0;
        }
    }
    _max=max(_max,c);
    if(_max==0) cout << "No value increase";
    else cout << _max ;
}
