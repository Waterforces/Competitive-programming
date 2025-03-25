/*
Task: 0002
Type: If-else
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    int _min=INT_MAX,_max=INT_MIN;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        if(a[i]<_min) {
            _min=a[i];  
        }
        else if(a[i]>_max) {
            _max=a[i];
        }
    }
    cout << _min << endl << _max;
}