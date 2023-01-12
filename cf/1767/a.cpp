#include<bits/stdc++.h>

using namespace std;

void sol()
{
	set<int> xx, yy;
	for( int i = 0;i < 3;i ++ ) {
		int x, y;
		cin >> x >> y;

		xx.insert(x);
		yy.insert(y);
	}

	if( xx.size() == 3 || yy.size() == 3 ) cout << "Yes" << endl;
	else cout << "No" << endl;

}

int main()
{
	int tt;
	cin >> tt;

	while( tt-- ) sol();

	return 0;
}
