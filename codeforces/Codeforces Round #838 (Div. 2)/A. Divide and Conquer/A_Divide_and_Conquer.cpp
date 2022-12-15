#include<bits/stdc++.h>
using namespace std;


int solve() {
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; i++)	cin >> v[i];

	long int sum = accumulate(v.begin(), v.end(), 0);

	if(sum % 2 == 0)	return 0;

	int minCount = INT_MAX;
	for(auto el : v) {
		int count = 0;
		if(el & 1) {
			while(el != 0 && el%2 != 0) {
				count++;
				el = el/2;
			}
			
		} else {
			while(el != 0 && el%2 == 0) {
				count++;
				el = el/2;
			}
		}
		minCount = min(minCount, count);
	}

	return minCount;

}

int main() {
	int t;
	cin >> t;

	while(t--) {

		cout << solve() << endl;

	}

	return 0;
}
