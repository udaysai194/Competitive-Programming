#include<bits/stdc++.h>
using namespace std;


int solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n == 2)  return 1;

    unordered_set<string> st;
    for(int i = 1; i < n; i++) {
        string temp = "";
        temp.push_back(s[i-1]);
        temp.push_back(s[i]);
        st.insert(temp);
    }

    return st.size();
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int t;
	cin >> t;

	while(t--) {

		cout << solve() << endl;

	}

	return 0;
}
