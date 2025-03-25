#include<bits/stdc++.h>
using namespace std;
int n,a[3],k;

int main() {
    cin >> n >> k;
    a[1]=a[2]=k;
    for(int i=1;i<=n;i++) {
        int gen,sc1,sc2;
        cin >> gen >> sc1 >> sc2;
        if(a[1]==0 && a[2]==0) continue ;
        // cout << i << " " << a[1] << " " << a[2] << "\n";
        if(sc1>8 && sc2>8) {
            if(a[gen]>0) {
                cout << i << " " << gen << "\n";
                a[gen]--;
            }
            else {
                cout << i << " " << 3-gen%3 << "\n";
                a[3-gen%3]--;
            }
        } 
        else if(sc1>8) {
            if(a[1]>0) {
                cout << i << " 1\n";
                a[1]--;
            }
        }
        else if(sc2>8) {
            if(a[2]>0) {
                cout << i << " 2\n";
                a[2]--;
            }
        }
    }
}