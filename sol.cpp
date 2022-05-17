#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long n, B, x, y;
		cin >> n >> B >> x >> y;
		vector<long long> a(n + 1);
		a[0] = 0;
		for (int i = 1; i < n + 1; i++) {
			long long res = LLONG_MIN;
			if (a[i - 1] + x <= B) {
				res = a[i - 1] + x;
			}
			if (a[i - 1] - y <= B) {
				res = max(res, a[i - 1] - y);
			}
			a[i] = res;
		}
		long long ans = 0;
		for (int i = 0; i < n + 1; i++) {
			ans += a[i];
		}
		cout << ans << '\n';
	}
	return 0;
}
