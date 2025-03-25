#include<bits/stdc++.h>
using namespace std;
int n;
string str;
int cube[6];
int ans[100];
void re() {
    cube[0]=1;
    cube[1]=2;
    cube[2]=3;
    cube[3]=5;
    cube[4]=4;
    cube[5]=6;

}
void test() {
    for(int i=0;i<6;i++){
        cout << cube[i] << " ";
    }
}
void chg(int &a,int &b) {
    int temp=a;
    a=b;
    b=temp;
}
void make(string s) {
    int x=s.length();
    re();
    for(int i=0;i<x;i++) {
        int temp;
        if(s[i]=='F') {
            chg(cube[0],cube[3]);
            chg(cube[3],cube[5]);
            chg(cube[5],cube[1]);
        }
        else if(s[i]=='B') {
            chg(cube[3],cube[5]);
            chg(cube[3],cube[1]);
            chg(cube[3],cube[0]);
        }
        else if(s[i]=='L') {
            chg(cube[0],cube[4]);
            chg(cube[4],cube[2]);
            chg(cube[4],cube[5]);
        }
        else if(s[i]=='R')  {
            chg(cube[4],cube[5]);
            chg(cube[0],cube[2]);
            chg(cube[2],cube[4]);
        }
        else if(s[i]=='C') {
            chg(cube[2],cube[3]);
            chg(cube[2],cube[4]);
            chg(cube[2],cube[1]);
        }
        else {
            chg(cube[1],cube[4]);
            chg(cube[1],cube[2]);
            chg(cube[2],cube[3]);
        }
    }
}
int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> str;
        make(str);
        ans[i]=cube[1];
    }
    for(int i=0;i<n;i++) {
        cout << ans[i] << " ";
    }
}