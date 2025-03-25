#include<bits/stdc++.h>
using namespace std;
int n,a[100005];

int main() {
    cout << "Enter how many elements\n";
    cin >> n;
    cout << "Enter the elements";
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    cout << "Sorted list is";
    for(int i=0;i<n;i++) cout << a[i] << "\n";
    cout << "Enter the element to be inserted\n";
    cin >> a[n];
    sort(a,a+n+1);
    cout << "Final list is\n";
    for(int i=0;i<=n;i++) cout << a[i] << "\n";
}