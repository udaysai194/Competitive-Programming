#include<bits/stdc++.h>
using namespace std;
void solve() {
   int n;
   cin >> n;
   vector<pair<int, int>> friends(n);
   
   for(int i = 0; i < n; i++) {
      int num;
      cin >> num;
      friends[i] = {num, i+1};
   }

   sort(friends.begin(), friends.end());

   for(int i = 0; i < n; i++) cout << friends[i].second << " ";


}
 
int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
 
   // int t;
   // cin >> t;
 
   // while(t--) {
 
   //    solve() << endl;
 
   // }
   
   solve();

   return 0;
}