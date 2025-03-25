#include<bits/stdc++.h>
using namespace std;
int a[6];

int main() {
    for(int i=0;i<6;i++) cin >> a[i];
    sort(a,a+6);
    cout << a[5]-a[0];
}