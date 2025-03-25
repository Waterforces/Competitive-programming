#include<bits/stdc++.h>
using namespace std;

void Trigonometric() {
    cout << "sin :\n";
    for(int i=0;i<=90;i+=5) cout << sin(i) << "\n";
    cout << "cos :\n";
    for(int i=0;i<=90;i+=5) cout << cos(i) << "\n";
    cout << "tan :\n";
    for(int i=0;i<=90;i+=5) cout << tan(i) << "\n";
}

int main() {
    Trigonometric();
} 