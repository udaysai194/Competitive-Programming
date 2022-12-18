#include<bits/stdc++.h>
using namespace std;


int solve() {

    string s;
    cin >> s;
    return (s[0]-'0')+(s[2]-'0');

}

int main() {
	int t;
	cin >> t;

	while(t--) {

		cout << solve() << endl;

	}

	return 0;
}
