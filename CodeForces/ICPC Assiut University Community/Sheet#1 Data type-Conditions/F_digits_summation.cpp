#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
	long long int a, b;

    cin>>a>>b;
    long long int sum=a%10 + b%10;
    cout<<""<<sum;
	
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
