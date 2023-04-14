#include<iostream>
#include<string>
#include<map>
#include<algorithm>

using namespace std;

int main() {

	int n; cin >> n;

	map<int, int> foo;
	for (; n != 0; --n) {

		int a; cin >> a;
		++foo[a];
	}

	auto MAX = max_element(foo.rbegin(), foo.rend(), [](const auto& f, const auto& s) {
		return f.second < s.second;
		}
	);
		 cout << MAX->first;

}
