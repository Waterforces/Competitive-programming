#include<bits/stdc++.h>
using namespace std;
int day,month,years;

int main() {
    cin >> day >> month >> years;
    int sum=day/10+day%10+month/10+month%10+years/1000+(years%1000)/100+(years%100)/10+years%10;
    // cout << day/10 << day%10 << " " << month/10 << month%10 << " " << years/1000 << (years%1000)/100 << (years%100)/10 << years%10 << "\n";
    // cout << s
    while(sum>=10) {
        cout << sum << " ";
        int tmp=sum/10;
        int k=sum%10;
        sum=tmp+k;
    }
    cout << sum;
}