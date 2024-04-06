#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
	double r, pi=3.141592653;
    
    cin>>r;
    cout<<fixed<<setprecision(9)<<pi*r*r;
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
