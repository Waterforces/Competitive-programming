#include<bits/stdc++.h>
using namespace std;

int main(){
    int r,c;
    cout << "Enter no. of row :: "; cin >> r;
    cout << "Enter no. of coloumns :: "; cin >> c;

    int arr[r][c], Max = -1e9+7, Min = 1e9+7;
    cout << "Enter Elements to Matrix Below ::\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++) {
            cout << "Enter a[" << i << "][" << j << "] Eliment :: "; cin >> arr[i][j];
            if(Max < arr[i][j]) Max = arr[i][j];
            if(Min > arr[i][j]) Min = arr[i][j];
        }
    }

    cout << "The givven matrix is ::\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++) cout << "\t" << arr[i][j];
        cout << "\n";
    }

    cout << "Highest Element :: " << Max << "\n";
    cout << "Lowest Element :: " << Min;

    return 0;
}