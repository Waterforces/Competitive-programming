#include<bits/stdc++.h>
using namespace std;

int main() {
    int sum=0,a[]={12,77,8,13,32,44,18};
    for(int i=0;i<7;i++) sum+=a[i];
    cout << sum << " " << float(sum)/7;
}