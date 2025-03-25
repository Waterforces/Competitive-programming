#include<bits/stdc++.h>
using namespace std;
int cou[10];
string s;

int main() {
    cin >> s;
    for(int i=0;i<s.size();i++) cou[int(s[i]-'A')]++;
    for(int i=0;i<8;i++) cout << cou[i] << " ";
}