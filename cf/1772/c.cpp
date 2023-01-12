#include<bits/stdc++.h>

using namespace std;

void sol()
{
	int k, n;
	cin >> k >> n;

	int d[k - 1];
	int sum = 0;
	int i = 0;
	int now = 2;
	while( sum + ( k - i  ) <= n - 1 && i < k - 1)
	{
		d[i] = i + 2;
		sum += d[i];
	}

	while( i < k - 1 )
	{
		d[i++] = 1;
	}
	int a[k];
	a[0] = 1;
	for( int i = 1;i < k;i ++ ) {
		a[i] = a[i - 1] + d[i - 1];
	}

	for( int i = 0;i < k;i ++ ) cout << a[i] << ' ';

	cout << endl;
}

int main()
{
	int tt;
	cin >> tt;

	while( tt-- ) sol();

	return 0;
}
