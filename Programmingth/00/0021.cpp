#include<bits/stdc++.h>
using namespace std;
string s;
int main() {
    getline(cin,s);
    int x=s.length();
    for(int i=0;i<x;i++) {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') {
            cout << s[i];
            i+=2;
        }
        else cout << s[i];
    }
}