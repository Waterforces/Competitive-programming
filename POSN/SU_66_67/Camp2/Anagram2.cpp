#include<bits/stdc++.h>
using namespace std;
int cou[2][10],ans;
string s[2];

int main() {
    cin >> s[0] >> s[1];
    for(int j=0;j<2;j++) {
        for(int i=0;i<s[j].size();i++) cou[j][int(s[j][i]-'A')]++;
    }
    for(int j=0;j<2;j++) {
        for(int i=0;i<8;i++) cout << cou[j][i] << " ";
        cout << endl;
    }
    for(int i=0;i<8;i++) {
        int diff = abs(cou[0][i]-cou[1][i]);
        if(diff!=0) ans++;
        cout << diff << " ";
    }
    cout << endl;
    if(ans>3) cout << "no";
    else cout << "anagram";
}