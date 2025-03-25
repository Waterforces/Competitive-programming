#include<bits/stdc++.h>
using namespace std;
int arr1[2][3] = {{1,2,3},{4,5,6}}, arr2[2][3] = {1,2,3,4,5}, arr3[2][3] = {{1,2},{4}};

int main(){
    cout << "Values in array1 by row are:\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++)cout << arr1[i][j] << " ";
        cout << "\n";
    }
    cout << "Values in array2 by row are:\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++) cout << arr2[i][j] << " ";
        cout << "\n";
    }
    cout << "Values in array3 by row are:\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++) cout << arr3[i][j] << " ";
        cout << "\n";
    }

    return 0;
}