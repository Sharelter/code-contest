#include<bits/stdc++.h>

using namespace std;
unordered_map<long long, long long> m;

long long fun( long long k )
{
	if( k == 0 ) return 1;
	else {
		if( m.count( k ) ) {
			return m[k];
		}
		else {
			long long ans = fun( k / 2 ) + fun( k / 3 );
			m[k] = ans;
			return ans;
		}
	}
}

int main()
{
	long long n;

	cin >> n;

	cout << fun(n) << endl;

	return 0;

}
