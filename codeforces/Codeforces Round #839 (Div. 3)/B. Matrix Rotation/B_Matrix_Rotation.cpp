#include<bits/stdc++.h>
using namespace std;


bool isBeautiful(vector<vector<int>> &mat) {
    return mat[0][0] < mat[1][0] && mat[0][1] < mat[1][1] &&
           mat[0][0] < mat[0][1] && mat[1][0] < mat[1][1];
}

void rotate(vector<vector<int>> &mat) {
    int temp = mat[0][0];
    mat[0][0] = mat[1][0];
    mat[1][0] = mat[1][1];
    mat[1][1] = mat[0][1];
    mat[0][1] = temp;
}


string solve() {

    vector<vector<int>> mat(2, vector<int> (2));
    cin >> mat[0][0] >> mat[0][1] >> mat[1][0] >> mat[1][1];

    for(int i = 0; i < 4; i++) {
        if(isBeautiful(mat))    return "YES";
        rotate(mat);
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
