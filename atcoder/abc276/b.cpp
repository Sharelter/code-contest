#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	map<int, set<int>> graph;

	while( m -- ) 
	{
		int a, b;
		cin >> a >> b;
		graph[a].insert(b);
		graph[b].insert(a);
	}

	for( int i = 1;i <= n;i ++ ) {
		cout << graph[i].size() << ' ';
		if( graph[i].size() ) {
			//for( auto j = graph[i].begin(); j != graph[i].end(); j ++ ) cout << *j << ' ';
			for( auto x : graph[i] ) cout << x << ' ';
		}
		cout << endl;
	}

	return 0;
	
}
