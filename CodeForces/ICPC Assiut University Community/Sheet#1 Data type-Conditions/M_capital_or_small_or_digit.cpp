#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    /*
    CODE TO FIND ASCII VALUE OF A CHAR:
    {
        int ch='5';
        cout<<""<<(int)5;
    }
*/
    char x;

    cin >> x;

    if (x >= 65 && x <= 90)
        cout << "ALPHA" << endl
             << "IS CAPITAL" << endl;

    else if (x >= 97 && x <= 122)
        cout << "ALPHA" << endl
             << "IS SMALL" << endl;

    else
        cout << "IS DIGIT" << endl;
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
