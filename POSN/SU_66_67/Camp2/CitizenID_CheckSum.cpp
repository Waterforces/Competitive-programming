#include<bits/stdc++.h>
using namespace std;
string s;
int sum;


int main() {
    cin >> s;
    for(int i=0;i<10;i++) {
        if(s[i]<='Z' && s[i]>='A') sum+=int(s[i]-'A'+1);
        else sum+=int(s[i]-'0');
    }
    // cout << sum;
    int mod = sum%11;
    if(mod<=1) mod = 1-mod;
    else mod = 11-mod;
    // cout << mod << endl;
    if(mod==int(s[10]-'0')) cout << "T " << sum;
    else cout << "F " << sum;
}
