#include<bits/stdc++.h>

using namespace std;

int main()
{
	unsigned long long n, t;

	cin >> n >> t;

	int a[n];
	for( int i = 0;i < n;i ++ ) scanf("%d", &a[i]);

	unsigned long long total = 0;
	for( int i = 0;i < n;i ++ ) total += a[i];
	t %= total;

	total = 0;
	for( int i = 0;i < n;i ++ ) 
	{
		total += a[i];
		if( total >= t ) {
			cout << i + 1 << ' ' << ( a[i] - ( total - t ) ) << endl;
			break;
		}
	}

	return 0;
}
