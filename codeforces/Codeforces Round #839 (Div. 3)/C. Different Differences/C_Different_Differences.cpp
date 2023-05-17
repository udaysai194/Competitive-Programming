#include<bits/stdc++.h>
using namespace std;


void solve() {
    int k, n;
    cin >> k >> n;

    int start = 1;
    int gap = 0;
    for(int i = 0; i < k; i++) {
        cout << start << " ";
        gap++;
        start = start + gap;
        if(start + (k-i-2) > n) {
            start = start-gap+1;
            gap = 1;
        }
    }
    cout << endl;
}

// int start = 1;
//     int gap = 0;
//     for(int i = 0; i < k; i++) {
//         cout << start << " ";

//         int nth = start;
//         int tempGap = gap;
//         for(int j = i+1; j < k; j++) {
//             gap++;
//             nth = nth+gap;
//         }

//         if(nth > n) {
//             gap = 1;
//             start = start + gap;
//         } else {
//             gap++;
//             start = start + gap;
//         }
//     }

int main() {
	int t;
	cin >> t;

	while(t--) {

		solve();

	}

	return 0;
}
