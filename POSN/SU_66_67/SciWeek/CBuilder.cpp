#include<bits/stdc++.h>
using namespace std;
using ull = unsigned long long int;
ull fibo[]={0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946,17711,28657,46368,75025,121393,196418,317811,514229,832040,1346269,2178309,3524578,5702887,9227465,14930352,24157817,39088169,63245986,102334155,165580141,267914296,433494437,701408733,1134903170};
ull n,sum;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    for(int i=1;i<=n;i++) {
        // cout << pow(fibo[i],2) << endl;
        sum+=(fibo[i]*fibo[i]);
    }
    cout << sum;
}