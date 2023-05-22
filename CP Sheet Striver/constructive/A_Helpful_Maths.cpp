#include<bits/stdc++.h>
using namespace std;
string solve() {
    vector<int> nums;
    string s, ans;
    cin >> s;
    for(int i = 0; i < s.size(); i+=2) nums.push_back(s[i]-'0');
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i++) {
        ans.push_back(nums[i]+'0');
        ans.push_back('+');
    }
    ans.pop_back();
    return ans;
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