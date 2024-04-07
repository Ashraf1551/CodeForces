#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
	int n,count=0;
	cin>>n;
 
	for(int i=1; i<=n; i++)
	{
		if(i%2==0)
		{
			cout<<""<<i<<endl;
			count++;
		}	
	}
 
	if(count==0)
		cout<<"-1"<<endl;	
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
 
	ll test=1;
//cin>>test;
	while(test--)
	{
		solve();
	}
	return 0;
}