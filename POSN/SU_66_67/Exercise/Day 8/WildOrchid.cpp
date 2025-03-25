#include<bits/stdc++.h>
using namespace std;
string s;
int a[13][27],_max;

int main() {
    cin >> s;
    for(int i=0;i<s.size();i+=2) {
        int idx=0;
        if(s[i]>='1' && s[i]<='9') idx=s[i]-'0';
        else if(s[i]>='A' && s[i]<='Z') idx=s[i]-55;
        if(a[idx][s[i+1]-'A'+1]==0) a[idx][0]++;
        a[idx][s[i+1]-'A'+1]++;
        _max=max(_max,a[idx][0]);
    }
    for(int i=1;i<=12;i++) cout << a[i][0] << "\n";
    cout << _max;
}