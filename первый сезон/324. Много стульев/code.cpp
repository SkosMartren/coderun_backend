#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	int n; cin >> n;
	int m; cin >> m;

	vector<int> A(n); for (int i = 0; i < n; ++i) { cin >> A[i]; }
	vector<int> B(m); for (int i = 0; i < m; ++i) { cin >> B[i]; }

	sort(A.begin(), A.end());
	sort(B.rbegin(), B.rend());

	long long ans = 0; // int ans = 0; // error in 19 test
	for (int i = 0; i < min(n, m); ++i) {

		if (B[i] - A[i] <= 0) {
			cout << ans; return 0;
		}
		ans += (B[i] - A[i]);
	}

	cout << ans; return 0;
}
