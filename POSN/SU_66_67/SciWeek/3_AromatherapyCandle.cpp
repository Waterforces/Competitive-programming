#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    if(a>=100) cout << "Aromatherapy candle is Fire";
    else if(a>38) cout << "Aromatherapy candle is Succeed";
    else if(a<0) cout << "Aromatherapy candle is Broken";
    else cout << "Aromatherapy candle is Fail";
}