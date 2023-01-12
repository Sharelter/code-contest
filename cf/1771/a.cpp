#include<bits/stdc++.h>

using namespace std;

void sol()
{
	long long n;
	cin >> n;
	multiset<int> a;

	for( int i =  0; i < n;i ++) {
		int t;
		cin >> t;
		a.insert(t);
	}

	long long min = *a.begin(), max = *a.rbegin();
	if( min == max ) cout << ( n * ( n - 1LL ) )  << endl;
	else cout << ( 2LL * a.count( min ) * a.count( max ) ) << endl;
}

int main()
{
	int tt;
	cin >> tt;
	while( tt -- ) sol();
}
