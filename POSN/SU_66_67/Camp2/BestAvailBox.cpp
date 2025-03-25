#include<bits/stdc++.h>
using namespace std;
int n;
int b[4];
int a[3];

void run() {
    if(a[0]<=8 && a[1]<=10 && a[2]<=15 && b[1]!=0) {
        cout << 1 << endl;
        b[1]--;
        return ;
    }
    if(a[0]<=12 && a[1]<=15 && a[2]<=25 && b[2]!=0) {
        cout << 2 << endl;
        b[2]--;
        return ;
    }
    if(a[0]<=20 && a[1]<=40 && a[2]<=50 && b[3]!=0) {
        cout << 3 << endl;
        b[3]--;
        return ;
    }
    if(a[0]>20 || a[1]>40 || a[2]>50) {
        cout << "Oversize product" << endl;
        return ;
    }
    cout << "Box not available" << endl; 
    return ;
}

int main() {
    cin >> n;
    cin >> b[1] >> b[2] >> b[3];
    for(int i=0;i<n;i++) {
        cin >> a[0] >> a[1] >> a[2];
        sort(a,a+3);
        run();
    }
}