#include<bits/stdc++.h>
using namespace std;
string solve() {
    string username;
    cin >> username;

    set<char> s;
    for(auto ch : username) s.insert(ch);
    return s.size() % 2 == 1 ? "IGNORE HIM!" : "CHAT WITH HER!";
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