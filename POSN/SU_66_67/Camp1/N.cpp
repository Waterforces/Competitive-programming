#include<bits/stdc++.h>
using namespace std;
int n;

int main() {
    cin >> n;
    int a=n%10,b=n%10,c=((2*n-1)+n-1)%10;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(j==0) cout << (n-i)%10;
            else if(i==j) cout << (n+j)%10;
            else if(j==n-1) cout << (((2*n-1)+n-1)-i)%10;
            else cout << " ";
            cout << " ";
        }
        cout << "\n";
    }
}