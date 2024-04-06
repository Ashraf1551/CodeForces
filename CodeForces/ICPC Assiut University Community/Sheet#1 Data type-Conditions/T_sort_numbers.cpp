#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
	int a, b, c,min,med,max;
	cin>>a>>b>>c;

    // Determine the maximum
    if (a > b) {
        if (a > c)
            max = a;
        else
            max = c;
    } else {
        if (b > c)
            max = b;
        else
            max = c;
    }


    // Determine the minimum
    if (a < b) {
        if (a < c)
            min = a;
        else
            min = c;
    } else {
        if (b < c)
            min = b;
        else
            min = c;
    }


    // Determine the medium
    if ((a >= b && a <= c) || (a >= c && a <= b))
        med = a;
    else if ((b >= a && b <= c) || (b >= c && b <= a))
        med = b;
    else
        med = c;


    cout<<""<<min<<endl<<""<<med<<endl<<""<<max<<endl<<endl<<""<<a<<endl<<""<<b<<endl<<""<<c<<endl;
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
