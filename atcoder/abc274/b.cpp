#include<bits/stdc++.h>

using namespace std;

int main()
{
	int h, w;
	cin >> h >> w;
	string s[h];

	for( int i = 0;i < h;i ++ ) {
		cin >> s[i];
	}

	int ans[w] = {0};
	for( int i = 0;i < w;i ++ ) 
		for( int j = 0;j < h;j ++ ) 
		{
			if( s[j][i] == '#' ) ans[i] ++;
		}

	for( int i= 0;i < w;i ++ ) cout << ans[i] << ' ';

	return 0;
}
