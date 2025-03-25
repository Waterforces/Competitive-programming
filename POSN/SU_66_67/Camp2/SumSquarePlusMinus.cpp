#include<bits/stdc++.h>
using namespace std;
int n;
int sum;
int main() {
    cin >> n;
    for(int i=1;i<=n;i++) {
        sum+=(pow(i,2)*pow(-1,i));
    }
    cout << sum;
}
