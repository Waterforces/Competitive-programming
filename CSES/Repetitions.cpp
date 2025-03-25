#include<bits/stdc++.h>
using namespace std;
int _max,cou;
char tmp='0';
string s;
 
int main() {
    cin >> s;
    for(auto& x: s) {
        if(x!=tmp) {
            cou=1;
            tmp=x;
        }
        else cou++;
        _max=max(_max,cou);
    }
    cout << _max;
}