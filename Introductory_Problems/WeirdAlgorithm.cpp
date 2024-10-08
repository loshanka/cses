#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long
void solve();
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	solve();
	return 0;
}
 
void solve()
{
	int n;
    cin>>n;
    cout<<n<<" ";
    while(true)
    {
        if(n==1) break;
        if(n%2==0) n=n/2;
        else n=n*3+1;
        cout<<n<<" ";
    }
    return;
}