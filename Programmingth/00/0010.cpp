/*
Task: 0010
Type: Implementation
*/
#include<bits/stdc++.h>
using namespace std;
int a[4]={1,0,0};
int main( ){
    int m;
    string s;
    cin >> s;
    int n=s.length();
    for(int i=0;i<n;i++) {
        if(s[i]=='A') {
            m=a[0];
            a[0]=a[1];
            a[1]=m;
        }
        else if(s[i]=='B') {
            m=a[1];
            a[1]=a[2];
            a[2]=m;
        }
        else if(s[i]=='C') {
            m=a[2];
            a[2]=a[0];
            a[0]=m;
        }
    }
    if(a[0]==1) {
        cout << 1;
        return 0;
    }
    if(a[1]==1) {
        cout << 2;
        return 0;
    }
    cout << 3;
    return 0;
}