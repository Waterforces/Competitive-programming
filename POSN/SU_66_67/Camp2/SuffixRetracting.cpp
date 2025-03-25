#include <iostream> 
#include<vector>
using namespace std;

void print(int start,vector<int>& v) {
  if(start>=v.size()) return ;
  cout << v[start] << " ";
  print(start+1,v);
}

int getsum(int k,vector<int>& v) {
  if(k<0 || v.size()<=1) return 0;
  int last = v[v.size()-1];
  v.pop_back();
  return last+getsum(k-1,v);
}

void solve(int x,int k,vector<int>& v) {
  if(v.size()==1) return ;
  v[x-1]+=getsum(k-1,v);
  print(0,v);
  // cout << x << " " << v.size();
  cout << endl;
  if(x-k>1) solve(x-k,k,v);
  else if(x>1) solve(1,x,v); 
}
 
int main() 
{ 
  vector<int> A; 
  int K; 
  cin >> K; 
  int input = 0; 
  while (true){ 
    cin >> input; 
    if (input == -1) 
      break; 
    else A.push_back(input);
  } 
  print(0,A);
  cout << endl;
  if(A.size()<=K) solve(1,K,A);
  else solve(A.size()-K,K,A);
  return 0; 
}