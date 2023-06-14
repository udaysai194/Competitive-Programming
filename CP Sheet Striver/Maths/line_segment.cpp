#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<pair<pair<int, char>, int>> cordinates;
    for(int i = 0; i < n; i++) {
        int x1, x2, y;
        cin >> x1;
        cin >> x2;
        cin >> y;
        cordinates.push_back({{x1, 'a'}, y});
        cordinates.push_back({{x2, 'd'}, y});
    }

    int maxCount = 0, count = 0;
    int yVal = INT_MAX;
    sort(cordinates.begin(), cordinates.end());
    //multiset<int> s;

    for(int i = 0; i < cordinates.size(); i++) {
        if(cordinates[i].first.second == 'a') count++;
        if(cordinates[i].first.second == 'd') count--;
        if(count >= maxCount) {
            int minY = INT_MAX, maxY = INT_MIN;
            int tc = 0;
            for(int j = i; j >= 0; j--) {
                if(cordinates[j].first.second == 'a') {
                    if(cordinates[j].second < minY)
                        minY = cordinates[j].second;
                    if(cordinates[j].second > maxY)
                        maxY = cordinates[j].second;
                    tc++;
                }
                if(tc >= count) break;
            }
            cout << "min : " << minY << " max : " << maxY << endl;
            if(maxCount == count) {
                if(maxY-minY < yVal)    yVal = maxY-minY;
            } else {
                yVal = maxY-minY;
            }
            maxCount = count;
        }
    }

    cout << maxCount << " " << yVal;
    cout << endl;
}
 
int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
 
   int t;
   cin >> t;
 
   while(t--) {
 
      solve();
 
   }
 
   return 0;
}