#include <bits/stdc++.h>
using namespace std;
void helper();
int main() 
{
    helper();
    return 0;
}

void helper(){
  string s;
  cin>>s;
  int ans=0;
  int count=1;
  for(int i=0;i<s.length()-1;i++){
    if(s[i]==s[i+1]) count++;
    else{
      ans=max(ans,count);
      count=1;
    }
  }
  ans=max(ans,count);
  cout<<ans;
}