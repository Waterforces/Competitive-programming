#include<bits/stdc++.h>
using namespace std;
string s;
int n;

int main() {
    cout << "Message : ";
    cin >> s;
    cout << "Key : ";
    cin >> n;
    for(int i=0;i<s.size();i++) cout << char(s[i]+n);
}