#include<bits/stdc++.h>
using namespace std;


bool isAscending(vector<long int> &v) {
    for(int i = 1; i < v.size(); i++) {
        if(v[i] < v[i-1]) return false; 
    }

    return true;
}

bool isDescending(vector<long int> &v) {
    for(int i = 1; i < v.size(); i++) {
        if(v[i] > v[i-1]) return false; 
    }

    return true;
}

bool check(vector<long int> v, int mid) {
    for(int i = 0; i < v.size(); i++) v[i] = abs(v[i]-mid);
    return isAscending(v);
}

int solve() {
    int n;
    cin >> n;
    vector<long int> v(n);
    for(int i = 0; i < n; i++)  cin >> v[i];
    
    long int maxVal = *max_element(v.begin(), v.end());
    long int minVal = *min_element(v.begin(), v.end());
    long int mid = minVal + (maxVal-minVal)/2;
    if(isAscending(v))  return 0;
    if(isDescending(v)) return maxVal;

    if(check(v, mid))   return mid;
    if(check(v, mid+1)) return mid+1;
    if(check(v, mid-1)) return mid-1;

    return -1;
}

int main() {
	int t;
	cin >> t;

	while(t--) {

		cout << solve() << endl;

	}

	return 0;
}
