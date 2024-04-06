#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
	int l1,r1,l2,r2;
	cin>>l1>>r1>>l2>>r2;

	int max, min;
	if(l1>=l2)
		max=l1;
	else
		max=l2;

	if(r1<=r2)
		min=r1;
	else
		min=r2;

	if(max<=min)
		cout<<max<<" "<<min<<endl;
	else
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
