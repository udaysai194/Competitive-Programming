#include<bits/stdc++.h>
using namespace std;


int solve() {
	
	string s;
	cin >> s;
	return (s.size()-1) * 9 + (s[0] - '0');

}

int main() {
	int t;
	cin >> t;

	while(t--) {

		cout << solve() << endl;

	}

	return 0;
}
