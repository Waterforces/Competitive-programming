#include<bits/stdc++.h>
using namespace std;
vector<int> even;
vector<int> odd;
int a;
int c,v;
int _max;


int main() {
    cin >> a;
    if(a%2==0) c=0;
    else c=1;
    while(true) {
        cin >> a;
        if(a<=0) break ;
        //cout << _max << " " << a << " " << v << endl;
        if(a%2==0) {
            if(c==1) {
                c=0;
                if(v==0) v++;
                v++;
                continue ;
            }
            c=0;
            _max=max(_max,v);
            v=0;
        }
        else {
            if(c==0) {
                c=1;
                if(v==0) v++;
                v++;
                continue ;
            }
            c=1;
            _max=max(_max,v);
            v=0;
        }
    }
    _max=max(_max,v);
    cout << _max/2;
}