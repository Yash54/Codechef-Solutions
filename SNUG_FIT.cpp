#include <bits/stdc++.h>

#define ll long long int
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR1(i, m, n) for(int i=m; i<n; i++)
#define FOR2(i, n, m) for(int i=n-1; i>=m; i--)

using namespace std;

int main(int argc, char const *argv[])
{
	FASTIO;
	int t;
	cin >> t;
	while(t--)
	{
		int n;	cin >> n;
		ll a[n],b[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n; ++i)
		{
			cin >> b[i];
		}
		sort(a,a+n);
		sort(b,b+n);
		ll ans = 0;
		for (int i = 0; i < n; ++i)
		{
			if (a[i] > b[i])
			{
				ans += b[i];
			}
			else
			{
				ans+= a[i];
			}
		}
		cout << ans << "\n";
	}
	return 0;
}