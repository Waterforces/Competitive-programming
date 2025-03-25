#include<bits/stdc++.h>
using namespace std;
int idx[8]={0,1,2,3,4,5,6,7},fac[9]={1,1,2,6,24,120,720,5040,40320},a[27],cou;
string s;
 
int main() {
    cin >> s;
    sort(s.begin(),s.end());
    cou=fac[s.size()];
    for(int i=0;i<s.size();i++) a[s[i]-'a']++;
    for(int i=0;i<=26;i++) cou/=fac[a[i]];
    cout << cou << "\n";
    do {
        cout << s << "\n";
    } while(next_permutation(s.begin(),s.end()));
}