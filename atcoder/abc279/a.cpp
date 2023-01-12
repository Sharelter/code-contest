#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;

	int cnt = 0;
	for( auto x : s ) if( x == 'w' ) cnt += 2;
	else cnt ++;

	cout << cnt;

	return 0;
}
