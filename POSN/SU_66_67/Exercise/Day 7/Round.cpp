#include<bits/stdc++.h>
using namespace std;
string s="68437531";
char t;
int n;

int main() {
    cin >> t >> n;
    if(t=='R') {
        for(int i=n;i<s.size();i++) cout << s[i];
        for(int i=0;i<n;i++) cout << s[i];
    }
    else {
        for(int i=s.size()-n-1;i<s.size();i++) cout << s[i];
        for(int i=0;i<s.size()-n;i++) cout << s[i];
    }
}