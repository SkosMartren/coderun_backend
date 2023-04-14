#include <iostream>
#include <string> 
#include <unordered_map>

using namespace std;

int main() {

	// input
	// J, — «драгоценности»
	// S — «камни»
	string J, S; cin >> J >> S;

	// sol
	int ans = 0;

	unordered_map<char, int> JewelryToCount;
	for (auto ch : J) {
		++JewelryToCount[ch];
	}

	for (auto ch : S) {
		if (JewelryToCount[ch] != 0) { ++ans; };
	}

	// output
	cout << ans;
}
