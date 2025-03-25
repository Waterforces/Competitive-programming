#include<bits/stdc++.h>
using namespace std;
typedef struct grade {
    int id,cost;
} grade;
grade x[1005];
int n,m;
bool check;

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        int id,cost;
        cin >> id >> cost;
        x[i]={id,cost};
    }
    cin >> m;
    for(int i=0;i<n;i++) {
        if(x[i].cost>=m) {
            cout << x[i].id << "\n";
            check=true;
        }
    }
    if(!check) cout << "None";
}