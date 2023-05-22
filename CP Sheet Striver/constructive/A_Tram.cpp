#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n;
    cin >> n;
    int count = 0, maxCount = 0;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        count -= a;
        count += b;
        maxCount = max(count, maxCount);
    }

    return maxCount;
}
 
int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
 
   int t = 1;
   //cin >> t;
 
   while(t--) {
 
      cout << solve() << endl;
 
   }
 
   return 0;
}