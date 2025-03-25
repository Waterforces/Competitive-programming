#include<bits/stdc++.h>
using namespace std;
int n,sum;

void recur(int x) {
    if(x<=0) return ;
    sum+=x%10;
    recur(x/10);
}

int main() {
    cin >> n;
    recur(n);
    cout << sum;
}