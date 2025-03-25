#include<bits/stdc++.h>
using namespace std;
string S,l,r;
int n;

int main() {
    cin >> S;
    for(int i=0,ch=0;i<S.size();i++) {
        if(S[i]=='*') ch=1;
        else if(ch) r+=S[i];
        else l+=S[i];
    }
    // cout << l << " " << r;
    cin >> n;
    for(int I=0;I<n;I++) {
        int ch=0;
        string s;
        cin >> s;
        for(int i=0;i<l.size();i++) {
            if(s[i]!=l[i]) {
                ch=i+1;
                break ;
            }
        }
        if(ch!=0) {
            cout << "F " << ch << "\n";
            continue ;
        }
        for(int i=0,j=s.size()-r.size();i<r.size();i++,j++) {
            if(s[j]!=r[i]) {
                ch=j+1;
                break ;
            }
        }
        if(ch!=0) {
            cout << "F " << ch << "\n";
            continue ;
        }
        cout << "T ";
        if(s.size()-l.size()-r.size()==0) cout << "-";
        else for(int i=l.size();i<s.size()-r.size();i++) cout << s[i];
        cout << "\n";
    }
}