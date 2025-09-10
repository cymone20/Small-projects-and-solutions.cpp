#include <iostream>
#include <vector>
using namespace std;

vector<int> prefix_sum(const string &s) {
  vector<int> ps(s.size()+ 1);
  for(int i = 0; i < s.size(); i++) {
     ps[i+1] = ps[i] + (s[i] == 'a' ? 1 : 0);
   
  }
  return ps;
}


int main() {

string s;
int q;

cin >> s >> q ;
vector<int> ps = prefix_sum(s);
while(q--) {
int l, r;
cin >> l >> r;

cout << ps[r] - ps[l-1] << "\n";

}

return 0;
}
