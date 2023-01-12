#include<bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<bool> vol( N + 2, false );
	vector<int> a(N);

	int sold = 0;
	for( int i = 0;i < N;i ++ ) {
		cin >> a[i];
		if( a[i] >= vol.size() ) sold ++;
		else if( vol[a[i]] ) sold ++;
		else vol[a[i]] = true;
	}

	int L = 1;
	int R = N + 1;

	while( true ) {
		while( vol[L] ) L ++;
		while( R != 0 and !vol[R] ) R--;
			if( sold >= 2 ) {
				sold -= 2;
				vol[L] = true;
			}
			else {
				if( L >= R ) break;
				vol[R] = false;
				sold ++;
			}

	}

	cout << L - 1 << endl;

	return 0;
}
