#include"json.hpp"
#include<iostream>
#include<string>

using namespace std;
using namespace nlohmann;

int main() {

	int n, m; cin >> n >> m;
	string garbage; getline(cin, garbage);
	
	json ans;
	for (int i = 0; i < n; ++i) {

		string str_JSON; getline(cin, str_JSON);
		//json tmp =  tmp.parse(str_JSON); // good!
		json tmp = json::parse(str_JSON);
    
		for (int j = 0; j < tmp["offers"].size(); ++j) {
      
			ans["offers"].push_back(tmp["offers"][j]);
			--m;
			if (m == 0) { cout << ans; return 0; }
		}
	}
  
   cout << ans; // n < m
}
