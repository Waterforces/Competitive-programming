#include<bits/stdc++.h>
using namespace std;
int n,a[27];

int main() {
    cin >> n;
    while(n-->0) {
        string s;
        cin >> s;
        for(int i=0;i<s.size();i++) a[int(s[i]-'a')]++;
    }
    for(int i=0;i<26;i++) {
        if(a[i]) cout << char('a'+i) << " = " << a[i] << "\n";
    } 
}