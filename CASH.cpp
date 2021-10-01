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
		ll k; cin >> k;
		ll a[n];
		ll sum = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
			sum += a[i];
		}
		cout << (sum%k) << "\n";
	}
	return 0;
}