#include<bits/stdc++.h>
using namespace std;
int sd,sm,ed,em,mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int main() {
    cin >> sd >> sm >> ed >> em;
    if((em<sm) || (sm==em && ed<sm) || (sd>mon[sm]) || (ed>mon[em])) {
        cout << "error";
        return 0;
    }
    int sum=0;
    for(int i=sm;i<=em;i++) sum+=mon[i];
    sum-=sd+(mon[em]-ed);
    cout << sum+1;
}