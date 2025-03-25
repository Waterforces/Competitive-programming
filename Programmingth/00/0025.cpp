#include<bits/stdc++.h>
using namespace std;
string s1,s2;
char o;
int main() {
    cin >> s1 >> o >> s2;
    int x=s1.length();
    int y=s2.length();
    if(o=='+') {
        int _min=min(x,y);
        int _max=max(x,y);
        if(_min==_max) {
            cout << "2";
            for(int i=2;i<=_max;i++) {
                cout << "0";

            }
            return  0;
        }
        for(int i=1;i<=_max;i++) {
            if(i==1 || _min==_max-i+1) cout << "1";
            else cout << "0";
        }
    }
    else {

        cout << "1";
        for(int i=1;i<=(x+y-2);i++) {
            cout << "0";
        }
    }
}