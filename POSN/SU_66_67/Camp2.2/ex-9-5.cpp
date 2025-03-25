#include<bits/stdc++.h>
using namespace std;
int arr[5] = {1,2,3,4,5}, sum;

void calculateAverage(){
    int *p = arr;
    for(int i=0;i<5;i++){
        sum += *(p + i);
    }
    sum /= 5;
}

int main(){
    calculateAverage();
    cout << sum;

    return 0;
}