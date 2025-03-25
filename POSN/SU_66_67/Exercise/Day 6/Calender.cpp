#include<bits/stdc++.h>
using namespace std;
int start,month;

int main() {
    cin >> start >>  month;
    for(int i=1,j=1;j<=month;i++) {
        if(i<start) cout << "   ";
        else {
            if((i-1)%7==0) cout << "\n";
            printf("%2d ",j);
            j++;
        }
    }
}