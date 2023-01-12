#include<bits/stdc++.h>

using namespace std;

int main()
{
	int tt;
	cin >> tt;

	while( tt -- ) 
	{
		int n, a, b;
		cin >> n >> a >> b;

		if( a > b ) cout << '1' << endl;
		else {
			double nn = n, aa = a;
			int ans = ceil( nn / aa );
			cout << ans << endl;
		}
	}
}
