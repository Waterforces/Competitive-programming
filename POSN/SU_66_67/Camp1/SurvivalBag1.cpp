#include<bits/stdc++.h>
using namespace std;
int a[3];

int main() {
    cin >> a[0] >> a[1] >> a[2];
    int bags = min(a[0]/3,min(a[1]/4,a[2]/2));
    int b[3]={bags*3,bags*4,bags*2};
    cout << bags << " ";
    for(int i=0;i<3;i++) cout << a[i]-b[i] << " ";
}