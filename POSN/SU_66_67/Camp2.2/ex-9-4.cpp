#include<bits/stdc++.h>
using namespace std;

void swapValues(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a = 5, b = 10;

    cout << a << " " << b << "\n";

    swapValues(&a, &b);

    cout << a << " " << b;

    return 0;
}