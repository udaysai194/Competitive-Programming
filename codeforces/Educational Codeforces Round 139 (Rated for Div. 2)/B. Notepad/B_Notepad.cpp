#include<bits/stdc++.h>
using namespace std;


string solve() {

	int n;
	cin >> n;
	string s;
	cin >> s;
	set<pair<char, char>> set1;

	for(int i = 0; i <= n-2; i++) {
		pair<char, char> temp = {s[i], s[i+1]};
		if(set1.find(temp) != set1.end())	return "YES";
		if(i > 0)							set1.insert({s[i-1], s[i]});
	}
	
	return "NO";
}

int main() {
	int t;
	cin >> t;

	while(t--) {

		cout << solve() << endl;

	}

	return 0;
}
