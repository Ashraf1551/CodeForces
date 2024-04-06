#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
	int a, b, c;
	char s,q;
	cin>>a>>s>>b>>q>>c;

	if (s == '+' || s == '-' || s == '*')
	{
		if ((s == '+' && a + b == c) || (s == '-' && a - b == c) || (s == '*' && a * b == c))
		{
			cout << "Yes" << endl;
        }
        else
        {
        	if (s == '+')
        	{ 
        		cout << a + b;
            }
            else if (s == '-')
            {
            	cout << a - b;
            } else if (s == '*')
            {
                cout << a * b;
            }
        }
    }
	
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
