#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
	int n, a, even = 0, odd = 0, pos = 0, neg = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a;
        
        if (a % 2 == 0)
            even++;
        if (a % 2 != 0)
            odd++;
        if (a > 0)
            pos++;
        if (a < 0)
            neg++;
    }
    
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;
	
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
