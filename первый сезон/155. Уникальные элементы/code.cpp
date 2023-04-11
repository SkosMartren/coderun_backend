#include <iostream>
#include <unordered_map> 

using namespace std;

int main() {
	unordered_map<int, int> NumberToCount;

	int n; cin >> n;
	for (; n != 0; --n) {
		int numb; cin >> numb;
		++NumberToCount[numb];
	}

	int ans = 0;
	for (auto [Number, Count] : NumberToCount) {
		if (Count == 1) { ++ans; }
	}
	cout << ans;
}
