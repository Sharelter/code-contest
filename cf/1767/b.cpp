#include<bits/stdc++.h>

using namespace std;

void sol()
{
	int n;
	cin >> n;

	vector<int> a(n);
	for( auto &x : a ) cin >> x;

	int x = a[0];
	sort( a.begin() + 1, a.end() );

	for( int i = 1;i < n;i ++ ) {
		if( a[i] > x ){
			x += ( a[i] - x + 1 ) / 2;
		}
	}

	cout << x << endl;
}

int main()
{
	int tt;
	cin >> tt;

	while( tt -- ) sol();
}
