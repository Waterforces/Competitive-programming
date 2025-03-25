#include<bits/stdc++.h>
using namespace std;
typedef struct students {
    string id;
    int score;
} students;
int n,avg,cou;
students x[10005];

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        string id;
        int score;
        cin >> id >> score;
        x[i]={id,score};
        avg+=score;
    }
    avg=ceil(float(avg)/n);
    for(int i=0;i<n;i++) {
        if(x[i].score>=avg) cou++;
    }
    cout << cou << "\n";
    for(int i=0;i<n;i++) {
        if(x[i].score>=avg) cout << x[i].id << "\n";
    }
}