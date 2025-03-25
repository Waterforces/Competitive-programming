/*
Task: 0011
Type: Implementation
*/
#include<bits/stdc++.h>
using namespace std;
bool b[1005];
int a[1005];
int n=10,m;
int c;
void mood(int x) {
    int y=x%42;
    if(b[y]==true) return ;
    b[y]=true;
    c++;
    return ;
}
void input() {
    for(int i=0;i<n;i++) {
        cin >> a[i];
        mood(a[i]);
    }
}
int main() {
    input();
    cout << c;
}