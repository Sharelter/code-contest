#include<bits/stdc++.h>

using namespace std;

const int N = 2e5 + 10;
vector<int> e[N];
bool flag[N];
bool stop;
deque<int> deq;

void dfs( int k, int to ) {
	if( !stop ) deq.push_back( k );

	if( k == to ) stop = true;
	flag[k] = true;

	int sz = e[k].size();
	for( int i = 0;i < sz;i ++ ) {
		if( !flag[e[k][i]] ) dfs( e[k][i], to );
	}

	if( !stop ) deq.pop_back();

	return ;
}

int main()
{
	int n, x, y;
	cin >> n >> x >> y;

	for( int i = 0;i < n - 1;i ++ ) 
	{
		int u, v;
		cin >> u >> v;
		e[u].push_back( v );
		e[v].push_back( u );

	}

	dfs( x, y );

	while( !deq.empty() ) {
		cout << deq.front() << ' ' ;
		deq.pop_front();
	}
}
