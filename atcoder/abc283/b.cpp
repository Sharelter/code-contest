#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int a[n];

	for( int i = 0;i < n;i ++ ) scanf("%d", &a[i]);

	int q;
	cin >> q;

	while( q-- ) {
		int name;
		cin >> name;
		if( name == 1 ) {
			int k, x;
			cin >> k >> x;
			a[k - 1] = x;
		}
		else {
			int k;
			cin >> k;
			cout << a[k - 1] << endl;
		}
	}

	return 0;
}
