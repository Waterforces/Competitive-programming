#include<bits/stdc++.h>
using namespace std;

bool check(char s) {
    if(s=='y' || s=='Y' || s=='n' || s=='N') return 1;
    return 0;
}

int main() {
    char s;
    cin >> s;
    cout << check(s);
} 