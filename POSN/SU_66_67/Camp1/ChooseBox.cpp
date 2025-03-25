#include<bits/stdc++.h>
using namespace std;
int a[3];

int main() {
    cin >> a[0] >> a[1] >> a[2];
    sort(a,a+3);
    if(a[0]<=8 && a[1]<=10 && a[2]<=15) cout << 1 << "\n" << 1200-(a[0]*a[1]*a[2]);
    else if(a[0]<=12 && a[1]<=15 && a[2]<=25) cout << 2 << "\n" << 4500-(a[0]*a[1]*a[2]);
    else if(a[0]<=20 && a[1]<=40 && a[2]<=50) cout << 3 << "\n" << 40000-(a[0]*a[1]*a[2]);
    else cout << "Oversize product\n" << (a[0]*a[1]*a[2])-40000;
}