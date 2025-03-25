#include<bits/stdc++.h>
using namespace std;
string s;
int n,cou;

int main() {
    cin >> n >> s;
    for(int i=0;i<n;i++) {
        bool check=0;
        for(int j=0;j<n-1;j++) {
            if(s[j]>s[j+1]) {
                check=1;
                swap(s[j],s[j+1]);
                j++;
            }
        }
        if(check) cou++;
    }
    cout << cou;
}