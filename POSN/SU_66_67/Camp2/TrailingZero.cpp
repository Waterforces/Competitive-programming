#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll unsigned int n;
ll unsigned int sum,ans;
int main() {
    scanf("%u",&n);
    for(int i=1;pow(5,i)<=n;i++) {
        sum+=n/pow(5,i);
    }
    printf("%u",sum);
}
