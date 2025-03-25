#include<bits/stdc++.h>
using namespace std;
int n,cou,a[30],b[30];
string s1,s2;

int main() {
    cin >> n >> s1 >> s2;
   for(int i=0;i<n;i++) {
        if(s1[i]=='?') a[29]++;
        else a[s1[i]-'a']++;
    }
   for(int i=0;i<n;i++) {
        if(s2[i]=='?') b[29]++;
        else b[s2[i]-'a']++;
    }
    // for(int i=0;i<30;i++) cout << a[i] << " ";
    for(int i=0;i<26;i++) cou+=min(a[i],b[i]);
    if(n-cou<a[29]+b[29]) cout << n;
    else cout << cou+a[29]+b[29];
}