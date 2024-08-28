class Solution {
public:
    string simplifyPath(string path) {

    stringstream stream (path);
    string segment;
    vector<string> segList;
    vector<string> stck;

    // split input string
    while(getline(stream, segment, '/')){
      segList.push_back(segment);clear
    }

    for (string current : segList) {
      if (current == ".." && stck.empty())
        continue;
      if(current == ".." && !stck.empty()){
        stck.pop_back();
        continue;
      }
      if (current != "" && current != ".") {
        stck.push_back(current);
      }
    }


    string ans = "/";
    for (int i = 0; i<stck.size(); i++) {
     if (i < stck.size() - 1) {
      ans+= stck[i] + "/";
     }else {
      ans+=stck[i];
     }

    }
    return ans;

  }
};
