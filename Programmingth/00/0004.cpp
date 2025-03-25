/*
Task: 0004
Type: Char
*/
#include<bits/stdc++.h>
using namespace std;
int x,y;
int main() {
    string s;
    cin >> s;
    for(int i=0;i<s.length();i++) {
        if(s[i]<='z' && s[i]>='a') x++;
        if(s[i]<='Z' && s[i]>='A') y++;
    }
    if(x==s.length()) cout << "All Small Letter";
    else if(y==s.length()) cout << "All Capital Letter";
    else cout << "Mix"; 
}