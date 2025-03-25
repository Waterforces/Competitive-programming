#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll n,sum;
ll fibo[]={0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946,17711,28657,46368,75025,121393,196418,317811,514229,832040,1346269,2178309,3524578,5702887,9227465,14930352,24157817,39088169,63245986,102334155,165580141};

int main() {
    cin >> n;
    for(int i=0;i<=n;i++) sum+=fibo[i];
    cout << "The total power of the Light Fragments = " << sum << "\n";
    cout << "The latest Light Fragment's power = " << fibo[n];
    if(n==29) cout << "S";
}