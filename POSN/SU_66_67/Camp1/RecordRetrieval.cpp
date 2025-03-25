#include<bits/stdc++.h>
using namespace std;
typedef struct students {
    string id,name,surname;
    int years;
} students;
int n,q,check=1;
students x[20005];

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        string id,name,surname;
        int years;
        cin >> id >> name >> surname >> years;
        x[i]={id,name,surname,years};
    }
    cin >> q;
    for(int i=0;i<n;i++) {
        if(q==x[i].years) {
            cout << x[i].id << " " << x[i].name << " " << x[i].surname << "\n";
            check=0;
        }
    }
    if(check) cout << "None";
}