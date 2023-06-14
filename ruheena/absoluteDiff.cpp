#include<bits/stdc++.h>
#define input(x, n) for(int i = 0; i < (n); i++)  cin >> (x)[i]
#define all(x) (x).begin(), (x).end()
#define make_unique(x) sort((x).begin(), (x).end()); (x).erase(unique((x).begin(), (x).end()), (x).end())

using namespace std;

void solve() {
    
    long long int cc = INT_MIN;
    int n;
    cin >> n;
    vector<pair<int, int>> scores(n);
    for(int i = 0; i < n; i++) {
        cin >> scores[i].first;
        scores[i].second = i;
    }
    
    sort(scores.begin(), scores.end(), greater<pair<int, int>> ());
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    
    maxHeap.push(scores[0].second);
    minHeap.push(scores[0].second);

    for(int i = 1; i < n; i++) {
        int minTop = minHeap.top();
        int maxTop = maxHeap.top();
        int ind = scores[i].second;
        long long int score = scores[i].first*1LL;
        long long int temp = max(score*abs(ind-minTop), score*abs(ind-maxTop));
        cc = max(cc, temp);
        minHeap.push(ind);
        maxHeap.push(ind);
    }

    cout << cc << endl;
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