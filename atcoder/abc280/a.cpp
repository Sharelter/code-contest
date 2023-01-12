#include<bits/stdc++.h>

using namespace std;

int main()
{
	int h,w;
	cin >> h >> w;

	char s[h][w + 1];
	for(int i = 0;i < h;i ++) cin >> s[i];

	int cnt = 0;
	for( int i = 0;i < h; i++ )
		for( int k = 0; k < w;k ++) if( s[i][k] == '#' ) cnt ++;

	cout << cnt << endl;
	return 0;
}
