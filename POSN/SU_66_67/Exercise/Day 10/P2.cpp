#include<bits/stdc++.h>
using namespace std;
int n,m,a[100005];

int main() {
    cout << "Enter how many elements\n";
    cin >> n;
    cout << "Enter the elements";
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    cout << "Input array elements are";
    for(int i=0;i<n;i++) cout << a[i] << "\n";
    cout << "Enter the element to be deleted\n";
    cin >> m;
    sort(a,a+n);
    cout << "The resultant vector is\n";
    for(int i=0;i<=n;i++) {
        if(a[i]!=m) cout << a[i] << "\n";
    }
}