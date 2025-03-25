#include<bits/stdc++.h>
using namespace std;
int n;
int c,k,m=1;
int sum=1;

int main() {
    cin >> n;
    if(n%2==0) {
        k=2+(4*((n/2)-1)); 
        while(n>1) {
            if(c==2) {
                k-=4;
                c=0;
            }
            m+=k;
            sum+=m;
            c++;
            n--;
            //
        }
    }
    else {
        k=4+(4*(n/2-1));
        while(n>1) {
            if(c==2) {
                c=0;
                k-=4;
            }
            //cout << k << " " << m << "  " << sum << endl;
            m+=k;
            sum+=m;
            c++;
            n--;
            
        }
    }
    cout << sum;
}
/*
1 2 3
8 9 4
7 6 5
*/