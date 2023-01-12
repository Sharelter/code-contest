#include<bits/stdc++.h>

using namespace std;

bool isconfuse(int h, int m)
{
	int a, b, c, d;
	a = h / 10, b = h % 10, c = m / 10, d = m % 10;

	if( ( a * 10 + c < 24 ) and ( b * 10 + d < 60 ) ) return true;
	else return false;
}

int main()
{
	int h,m;

	cin >> h >> m;
	if( isconfuse( h, m ) ) cout << h << ' ' << m;
	else {
		while( !isconfuse(h, m) ) {
			m ++;
			if( m > 59 ) {
				m %= 60;
				h ++;
			}
			if( h > 23 ) h %= 24;
		}
		cout << h << ' ' << m;
	}

	return 0;
}
