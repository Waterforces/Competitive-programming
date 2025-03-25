#include<bits/stdc++.h>
using namespace std;
int n,water,bread,eggs;

int main() {
    cin >> n;
    for(int I=0;I<n;I++) {
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        a[0]+=water;
        a[1]+=bread;
        a[2]+=eggs;
        // cout << a[0] << " " << a[1] << " " << a[2] << "===\n" ;
        int bags = min(a[0]/3,min(a[1]/4,a[2]/2));
        int b[3]={bags*3,bags*4,bags*2};
        water=a[0]-b[0]; bread=a[1]-b[1]; eggs=a[2]-b[2];
        cout << bags << " " << water << " " << bread << " " << eggs << "\n";
    }
}