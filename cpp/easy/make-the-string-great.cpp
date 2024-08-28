#include <cctype>
#include <string>
using namespace std;
class Solution { 
public:
    string makeGood(string s) {
      string ans = "";
      for(char c : s){
         if (ans.size() == 0) {
          ans.push_back(c);
          continue;
         }
         if(toupper(c) == toupper(ans.back())){
          if(c != ans.back()){
            ans.pop_back();
            continue;
        }
      }
      ans.push_back(c);
    }
    return ans;
    }
};
