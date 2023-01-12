#include<bits/stdc++.h>
#include<atcoder/dsu>

using namespace std;
using namespace atcoder;

int mem[2020][2020];
int dx[6] = { -1, -1, 0, 0, 1, 1 };
int dy[6] = { -1, 0, -1, 1, 0, 1 };

int main()
{
	int n;
	cin >> n;

	vector<int> x(n + 1), y(n + 1);
	dsu fig( n + 1 );

	for( int i = 1;i <= n;i ++ ) {
		cin >> x[i] >> y[i];
			x[i] += 1005, y[i] += 1005;
			mem[x[i]][y[i]] = i;
	}

	for( int i = 1;i <= n;i ++ ) {
		for( int j = 0;j < 6;j ++  ) {
  			int nx = x[i] + dx[j];
			int ny = y[i] + dy[j];
			if( mem[nx][ny] > 0 ) {
				fig.merge( i, mem[nx][ny] );
			}
		}
	}

	int cnt = 0;
	for( int i = 1;i <= n;i ++ ) 
		if( fig.leader(i) == i ) cnt ++;

	cout << cnt << endl;

	return 0;
}
