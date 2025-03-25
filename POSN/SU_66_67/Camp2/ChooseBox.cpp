#include<bits/stdc++.h>
using namespace std;
int a[3],ans;
int main() {
    cin >> a[0] >> a[1] >> a[2];
    ans=a[0]*a[1]*a[2];
    sort(a,a+3);

    if(a[1]<=10 && a[2]<=15 && a[0]<=8)
    {
        cout << 1 << endl << 1200-ans;
        return 0;
    }
    if(a[2]<=25 && a[1]<=15 && a[0]<=12)
    {
        cout << 2 << endl << 4500-ans;
        return 0;
    }
    if(a[1]<=40 && a[2]<=50 && a[0]<=20)
    {
        cout << 3 << endl << 40000-ans;
        return 0;
    }

    cout << "Oversize product" << endl;
    if(ans<=1200) {
        cout << ans-1200;
        return 0;
    }
    if(ans<=4500) {
        cout << ans-4500;
        return 0;
    }
        cout << ans-40000;
        return 0;
}
