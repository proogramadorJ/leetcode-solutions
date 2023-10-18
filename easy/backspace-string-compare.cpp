class Solution {
public:
    string remove(string s){
      string s1;
      for(char c : s){
       if(c != '#' && s1.length() == 0) {
        s1.push_back(c) ;
        continue;
      }
      if(c == '#' && s1.length() == 0)
        continue;
      if(c == '#'){
         s1.pop_back();
      }else {
         s1.push_back(c);
      }

    }
    return s1;
    }
    bool backspaceCompare(string s, string t) {
       return remove(s) == remove(t);
    }
};
