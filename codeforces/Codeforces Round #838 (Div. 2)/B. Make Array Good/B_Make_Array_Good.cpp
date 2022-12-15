#include<bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin >> n;

    vector<pair<unsigned long long int, int>> v(n);
    for(int i = 0; i < n; i++) {
        unsigned long long int temp;
        cin >> temp;
        v[i] = {temp, i+1};
    }

    sort(v.begin(), v.end());
    vector<pair<int, unsigned long long int>> ans;
    int count = 0;
    for(int i = 1; i < n; i++) {
        unsigned long long int prev = v[i-1].first, cur = v[i].first;
        if(cur % prev != 0) {
            unsigned long long int rem = (cur + prev) % prev;
            v[i].first = cur + prev - rem;
            ans.push_back({v[i].second, v[i].first - cur});
            count++;
        }

    }

    cout << count << endl;
    for(auto p : ans) {
        cout << p.first << " " << p.second << endl;
    }

}

int main() {
	int t;
	cin >> t;

	while(t--) {

		solve();

	}

	return 0;
}
