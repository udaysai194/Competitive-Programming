#include<iostream>
#include<bits/stdc++.h>
#define input(x, n) for(int i = 0; i < (n); i++)  cin >> (x)[i]
#define all(x) (x).begin(), (x).end()
#define make_unique(x) sort((x).begin(), (x).end()); (x).erase(unique((x).begin(), (x).end()), (x).end())

using namespace std;


void linesweap(vector<vector<int>> &upd, int n) {
    for(int i = 1; i < n; i++){
        for(int j = 0; j < n; j++){
            upd[i][j] += upd[i-1][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 1; j < n; j++){
            upd[i][j] += upd[i][j-1];
        }
    }
}

void printUpdatedMat(vector<vector<int>> &mat, vector<vector<int>> &upd, int n) {
    cout << "updated mat " << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << upd[i][j] << " ";
        }
        cout << endl;
    }
    cout << "end mat " << endl;
}

int count(vector<vector<int>> &mat, vector<vector<int>> upd, int n, vector<int> &query) {
    linesweap(upd, n);

    unordered_map<int, int> mp;
    for(int i = query[0]; i <= query[2]; i++) {
        for(int j = query[1]; j <= query[3]; j++) {
            mp[(mat[i][j] + upd[i][j])%8]++;
        }
    }

    //printUpdatedMat(mat, upd, n);

    int maxVal = INT_MIN, minVal = INT_MAX;

    for(auto key : mp) {
        maxVal = max(maxVal, key.second);
        minVal = min(minVal, key.second);
    }

    return maxVal - minVal;
}

void update(vector<vector<int>> &upd, int n, vector<int> &query) {
    int x1 = query[0], y1 = query[1], x2 = query[2], y2 = query[3];
    upd[x1][y1]++;
    if(x2 + 1 < n) upd[x2+1][y1]--;
    if(y2 + 1 < n) upd[x1][y2+1]--;
    if(x2 + 1 < n && y2 + 1 < n) upd[x2+1][y2+1]++;
}

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> mat(n, vector<int> (n));
    vector<vector<int>> upd(n, vector<int> (n, 0));
    for(int i = 0; i < n; i++)  for(int j = 0; j < n; j++)  cin >> mat[i][j];
    int q;
    cin >> q;

    while(q--) {
        int type;
        vector<int> query(4);
        cin >> type >> query[0] >> query[1] >> query[2] >> query[3];
        //cout << "query " << type << query[0] << query[1] << query[2] << query[3] << endl;
        if(type == 0)   cout << count(mat, upd, n, query) << endl;
        if(type == 1)   update(upd, n, query);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}