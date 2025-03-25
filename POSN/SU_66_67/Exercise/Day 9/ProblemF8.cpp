#include<bits/stdc++.h>
using namespace std;

int sum(int a[]) {
    int sum=0;
    for(int i=0;i<10;i++) sum+=a[i];
    return sum;
}

int main() {
    int a[10];
    for(int i=0;i<10;i++) cin >> a[i];
    cout << sum(a);
} 