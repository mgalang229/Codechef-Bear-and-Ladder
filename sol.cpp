/**
 *    author:  Galang, Mark Jason T.
 *    created: 08.28.2020 11:51:08     
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a, b;
		cin >> a >> b;
		if (a > b) {
			swap(a, b);
		}
		if (a + 2 == b) {
			cout << "YES";
		} else if (a % 2 == 1 && a + 1 == b) {
			cout << "YES";
		} else {
			cout << "NO";
		}
		cout << '\n';
	}
	return 0;
}
