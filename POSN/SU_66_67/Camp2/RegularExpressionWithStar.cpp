#include<bits/stdc++.h>
using namespace std;
string o;
vector<char> v[2];
int b,c;

void run(string s) {
    int x=s.length();
    for(int i=0;i<v[0].size();i++) {
        if(s[i]==v[0][i]) {
            //cout << 1 << " " << s[i] << endl;
            s[i]=0;
            c++;
            continue ;
        }
        else {
            //cout << 11 << " " << s[i] << endl;
            cout << "F " << i+1 << endl;
            return ;
        }
    }
    for(int i=x-v[1].size(),_i=0;_i<v[1].size();i++,_i++) {
        if(s[i]==v[1][_i]) {
            //cout << 2 << " " << s[i] << endl;
            s[i]=0;
            c++;
            continue ;
        }
        else {
            //cout << 22 << " " << s[i] << endl;
            cout << "F " << i+1 << endl;
            return ;
        }
    }
    cout << "T ";
    if(c==x) {
        cout << "-\n";
        return ;
    }
    for(int i=0;i<x;i++) {
        if(s[i]==0) continue ;
        cout << s[i];
    }
    cout << endl;
}

int main() {
    cin >> o;
    for(int i=0;i<o.length();i++) {
        if(o[i]=='*') {
            b=1;
            continue ;
        }
        v[b].push_back(o[i]);
    }
    int n;
    cin >> n;
    for(int i=0;i<n;i++) {
        string s;
        c=0;
        cin >> s;
        run(s);
    }
}
