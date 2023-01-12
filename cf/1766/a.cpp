#include<bits/stdc++.h>

using namespace std;
const int N = 1e7;

bool check( int x )
{
	string s = to_string(x);

	int cnt = 0, len = s.length();
	for( int i = 0;i < len;i ++ ){
		if( s[i] != '0' ) cnt ++;
	}

	if( cnt == 1 ) return true;
	else return false;
}

int main()
{
	int tt;
	cin >> tt;
	vector<int> a;
	for( int i = 0;i < N;i ++ ) {
		if( check( i ) ) a.push_back( i );
	}

	while( tt -- ) {
		int n;
		cin >> n;

		int ans = 0;
		for( auto x : a )
			if( x <= n ) ans ++;

		cout << ans << endl;
	}
}
