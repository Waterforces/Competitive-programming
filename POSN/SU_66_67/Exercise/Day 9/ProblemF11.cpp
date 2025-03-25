#include<bits/stdc++.h>
using namespace std;

int y(int x) {
    return x*x-3*x+2;
}

int main() {
    int x;
    cin >> x;
    cout << y(x);
}