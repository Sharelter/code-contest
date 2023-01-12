#include<bits/stdc++.h>

using namespace std;
const int mod = 998244353;

int main()
{
	long long a, b, c, d, e, f;

	cin >> a >> b >> c >> d >> e >> f;

	cout << (( ( ( ( a % mod ) * ( b % mod ) ) % mod ) * ( c % mod ) ) % mod + mod - ( ( ( ( d % mod ) * ( e % mod ) ) % mod ) * ( f % mod ) ) % mod) % mod;

	return 0;

}
