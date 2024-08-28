class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> myStack;
      string output = "";
      for(char c : s){
        if(myStack.empty()){
          output+=c;
          myStack.push(c);
          continue;
        }
        if(c == myStack.top()){
          output.pop_back();
          myStack.pop();
          continue;
        }
          myStack.push(c);
          output.push_back(c);
        
      }
    return output;
    }
};

