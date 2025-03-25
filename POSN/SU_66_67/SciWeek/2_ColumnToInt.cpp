#include<bits/stdc++.h>
using namespace std;

int main() {
    int ans=0;
    string s;
    cin >> s;
    for(int i=s.size()-1;i>=0;i--) {
        if(s[i]>='A' && s[i]<='Z')  ans+=((s[i]-'A'+10)*pow(36,s.size()-i-1));
        else ans+=((s[i]-'0')*pow(36,s.size()-i-1));
    }
    cout << ans;
}