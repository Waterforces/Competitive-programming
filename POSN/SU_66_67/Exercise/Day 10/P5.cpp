#include<bits/stdc++.h>
using namespace std;
int n,m,x,y,a[10005],_min=INT_MAX;

int main() {
    cout << "Enter the value of n\n";
    cin >> n;
    cout << "Enter the numbers\n";
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    cout << "two elements such that their sum is closest to zero\n";
    for(int i=0;i<n;i++) {
        for(int j=n-1;j>=0;j--) {
            if(_min>a[i]+a[j] && (a[i]+a[j])>=0) {
                _min=a[i]+a[j];
                x=i;
                y=j;
            }  
        }
    }
    cout << x << "," << y;
}   