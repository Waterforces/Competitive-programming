#include<bits/stdc++.h>
using namespace std;
int a[9];
int sum=0;
void input() {
    for(int i=0;i<9;i++) {
        cin >> a[i];
        sum+=a[i];
    }
}

void process() {
    for(int i=0;i<9;i++) {
        for(int j=i+1;j<9;j++) {
            if(sum-(a[i]+a[j])==100) {
                for(int I=0;I<9;I++) {
                    if(I!=i && I!=j) {
                        cout << a[I] << endl;
                    }

                }
            }
        }
    }
}
int main() {
    input();
    process();
}