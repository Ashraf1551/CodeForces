#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
	long long int n;

	cin >> n;
	cout << "" << n * (n + 1) / 2;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll test;
	cin >> test;
	while (test--)
	{
		solve();
	}
	return 0;
}
