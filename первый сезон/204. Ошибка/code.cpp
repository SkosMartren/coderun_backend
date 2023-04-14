#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {

	int n; cin >> n;

	vector<int>A_Multiply_B(n);
	double SUM = 0;
	for (int i = 0; i < n; ++i) {

		int a, b; cin >> a >> b;
		A_Multiply_B[i] = a * b;
		SUM += a * b;
	}

	cout /*<< fixed*/ << setprecision(12);
	for (int i = 0; i < n; ++i) { cout  << (A_Multiply_B[i] / SUM) << '\n'; }

}
