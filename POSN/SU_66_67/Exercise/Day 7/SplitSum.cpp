#include<bits/stdc++.h>
using namespace std;
string s;
int sum;

int main() {
    cin >> s;
    for(int i=0;i<s.size();i++) sum+=s[i]-'0';
    cout << sum;
}