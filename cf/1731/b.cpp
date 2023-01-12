#include<bits/stdc++.h>

using namespace std;
const int mod = 1e9 + 7;

void sol()
{
	long long n;
	cin >> n;

	cout << (( (( n * ( n + 1 ) ) % mod) * ( 4 * n - 1 ) ) % mod * 337) % mod << endl;

}

int main()
{
	int tt;
	cin >> tt;
	while( tt-- ) sol();

	return 0;
}
