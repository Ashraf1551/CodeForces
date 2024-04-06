#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
	int a, b;
	char s;
	cin >> a >> s >> b;

	if (s == '>' || s == '<')
	{
		if (s == '>' && a > b)
			cout << "Right" << endl;
		else if (s == '<' && a < b)
			cout << "Right" << endl;
		else
			cout << "Wrong" << endl;
	}
	else
	{
		if (s == '=')
		{
			if (a == b)
				cout << "Right" << endl;
			else
				cout << "Wrong" << endl;
		}
	}
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

	ll test = 1;
	// cin>>test;
	while (test--)
	{
		solve();
	}
	return 0;
}
