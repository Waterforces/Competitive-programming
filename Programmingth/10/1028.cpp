#include<bits/stdc++.h>
using namespace std;
map<char,int> mp;
char s;

int main() {
    while(cin >> s) {
        if(s=='!') {
            cout << "!";
            return 0;
        }
        else if(s=='#') {
            char var;
            cin >> var;
            cout << mp[var] << "\n";
        }
        else if(s=='=') {
            char var;
            int n;
            cin >> var >> n;
            mp[var]=n;
        }
        else {
            char keep,act;
            cin >> keep >> act;
            if(s=='+') mp[keep]+=mp[act];
            else if(s=='-') mp[keep]-=mp[act];
            else if(s=='*') mp[keep]*=mp[act];
            else mp[keep]/=mp[act];
        }
    }
}