#include<bits/stdc++.h>
using namespace std;
typedef struct student {
    string id,name,surname;
    double grade;
    bool operator<(const student& a) const {
        return grade>a.grade;
    }
} student;
student x[105];
int n;

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        string id,name,surname;
        double grade;
        cin >> id >> name >> surname >> grade;
        x[i]={id,name,surname,grade};
    }
    sort(x,x+n);
    cout << x[0].id << " " << x[0].name << " " << x[0].surname << " " << x[0].grade;
}