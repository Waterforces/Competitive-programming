#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int main() {
    cin >> a >> b >> c;
    int _min=min(a/3,min(b/4,c/2));
    /*if(_min==a/3) {
        //_min=_min/3;
        cout << _min << " " << a-_min*3 << " " << b-_min*4 << " " << c-_min*2;
    }
    else if(_min==b/4) {
       // _min=_min/4;
        cout << _min << " " << a-_min*3 << " " << b-_min*4 << " " << c-_min*2;
    }
    else {
        //_min=_min/2;
        cout << _min << " " << a-_min*3 << " " << b-_min*4 << " " << c-_min*2;
    }*/
    cout << _min << " " << a-_min*3 << " " << b-_min*4 << " " << c-_min*2;
}
