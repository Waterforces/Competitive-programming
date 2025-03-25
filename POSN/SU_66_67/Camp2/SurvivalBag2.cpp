#include<bits/stdc++.h>
using namespace std;
int n;
int a,b,c,_min,x,y,z;
int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> a >> b >> c;
        a+=x;
        b+=y;
        c+=z;
        _min=min(a/3,min(b/4,c/2));
        int _min=min(a/3,min(b/4,c/2));
        cout << _min << " " << a-_min*3 << " " << b-_min*4 << " " << c-_min*2 << endl;
        x=a-_min*3;
        y=b-_min*4;
        z=c-_min*2;
    }
}

