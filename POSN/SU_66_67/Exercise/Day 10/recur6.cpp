#include<bits/stdc++.h>
using namespace std;
string s;
int sum;

void cou(int i) {
    if(i>=s.size()) return ;
    if(s[i]>='0' && s[i]<='9') sum+=s[i]-'0';
    cou(i+1);
}

int main() {
    cin >> s;
    cou(0);
    cout << sum;
}