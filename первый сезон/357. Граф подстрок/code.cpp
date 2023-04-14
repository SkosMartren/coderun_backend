#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <string>

using namespace std;

struct Edge {

	string Left;
	string Right;
};

struct MyHasher {

	size_t operator()(const Edge& e)const {

		size_t x = 37;
		return L_Hash(e.Left) * x * x + R_Hash(e.Right) * x + 121;
	}

	hash<string> L_Hash;
	hash<string> R_Hash;
};

bool operator==(const Edge& E_L, const Edge& E_R) {
	return E_L.Left == E_R.Left && E_L.Right == E_R.Right;
}

int main() {

	int T; cin >> T;

	unordered_set<string> Vertexes;
	unordered_map<Edge, int, MyHasher> EdgeToWeight;
	for (; T > 0; --T) {
		string str; cin >> str;

		for (int i = 0; i < str.size() - 3; ++i) {

			const string L = { str.begin() + i, str.begin() + i + 3 };
			const string R = { str.begin() + i + 1, str.begin() + i + 4 };

			Vertexes.insert(L); Vertexes.insert(R);
			++EdgeToWeight[{L, R}];
		}

	}

	cout << Vertexes.size() << '\n';    
	cout << EdgeToWeight.size() << '\n';
	for (auto [Edge, Weight] : EdgeToWeight) {
		cout << Edge.Left << ' ' << Edge.Right << ' ' << Weight << '\n';
	}
}
