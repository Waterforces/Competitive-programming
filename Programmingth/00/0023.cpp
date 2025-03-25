#include <bits/stdc++.h>
using namespace std;
int main(){
    int mo[13]={31,31,28,31,30,31,30,31,31,30,31,30,31};
    string d[8]={"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
    int n,m,sum;
    cin >> n >> m;
    sum=n;
    for(int i=1;i<m;i++) sum+=mo[i];
    cout << d[sum%7];

}