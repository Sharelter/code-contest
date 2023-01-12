#include<bits/stdc++.h>

using namespace std;

int main()
{
	int h,w;
	cin >> h >> w;

	vector<string> s(h), t(h);
	for( auto &x : s ) cin >> x;
	for( auto &x : t ) cin >> x;

	vector<string> Ts(w), Tt(w);
	for( int i = 0;i < h;i ++ ) 
	{
		for( int j = 0;j < w;j ++ ) 
		{
			Ts[j].push_back( s[i][j] );
			Tt[j].push_back( t[i][j] );
		}
	}

	sort( Ts.begin(), Ts.end() );
	sort( Tt.begin(), Tt.end() );

	if( Ts == Tt ) cout << "Yes";
	else cout << "No";

	return 0;
}
