#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;

	map<int, vector<int>> graph;

	while( n -- ) {
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	queue<int> q;
	q.push( 1 );
	set<int> S;
	S.insert( 1 );

	while( !q.empty() ) {
		int v = q.front();
		q.pop();
		for( auto i : graph[v] ) {
			if( !S.count(i) ){
				q.push(i);
				S.insert(i);
			}
		}
	}

	cout << *S.rbegin() << endl;
	return 0;
}
