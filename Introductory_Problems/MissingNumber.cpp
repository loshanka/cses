#include <bits/stdc++.h>
using namespace std;
void helper();
int main() 
{
    helper();
    return 0;
}

void helper(){
  int n;
  cin>>n;
  long long sum=0;
  for(int i=0;i<n-1;i++){
    int t;
    cin>>t;
    sum+=t;
  }
  cout<<(long long)n*(n+1)/2 - sum;
}