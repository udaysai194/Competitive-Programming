#include<bits/stdc++.h>
using namespace std;
string solve() {
    string s;
    cin >> s;
    s[0] = s[0] >= 'a' ? (s[0]-'a'+'A') : s[0];
    return s;
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