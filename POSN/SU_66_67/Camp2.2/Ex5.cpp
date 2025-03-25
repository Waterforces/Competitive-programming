#include<bits/stdc++.h>
using namespace std;

int main(){
    string name[3];
    int x,y,z;
    float avg_score[3];
    for(int i=0;i<3;i++){
        cout << "Enter student name: "; cin >> name[i];
        cout << "Enter score 1: "; cin >> x;
        cout << "Enter score 2: "; cin >> y;
        cout << "Enter score 3: "; cin >> z;
        avg_score[i] = (x+y+z) / 3;
    }

    cout << "--------------------------\n" << "Student Information\n" << "-----";
    for(int i=0;i<3;i++){
        cout << "---------------------\n";
        cout << "Student:" << name[i] << "\n";
        cout << "Average: " << avg_score[i] << "\n";
        cout << "Grade: ";
        if(avg_score[i] > 100 || avg_score[i] < 0) cout << "Out of Range\n";
        else if(avg_score[i] >= 80) cout << "A\n";
        else if(avg_score[i] >= 70) cout << "B\n";
        else if(avg_score[i] >= 60) cout << "C\n";
        else if(avg_score[i] >= 50) cout << "D\n";
        else cout << "F\n";
    }

    return 0;
}