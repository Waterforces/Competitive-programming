#include<bits/stdc++.h>
using namespace std;

int run(int x) {
    if(x<10) return x;
    int sum=0;
    while(sum<10) {
        sum+=x%10;
        x/=10;
    }
    run(x);
} 

int main() {
    int n;
    cin >> n;
    cout << run(n);
}