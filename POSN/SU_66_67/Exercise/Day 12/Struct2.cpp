#include<bits/stdc++.h>
using namespace std;
typedef struct grade {
    int id,cost;
} grade;
grade x[1005];
int n,m,k;
bool check;

int main() {
    cin >> n >> m;
    for(int i=0;i<n;i++) {
        int id;
        for(int j=0;j<m;j++) {
            int cost;
            cin >> cost;
            x[i].cost+=cost;
        }
    }
    cin >> k;
    for(int i=0;i<n;i++) {
        if(x[i].cost>=k) {
            cout << x[i].id << "\n";
            check=true;
        }
    }
    if(!check) cout << "None";
}