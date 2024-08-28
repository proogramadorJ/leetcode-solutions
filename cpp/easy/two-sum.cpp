class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> map;
        for(int i = 0 ; i < nums.size(); i++){
            map.insert({nums[i], i});
        }
        for(int i = 0; i < nums.size(); i++){
            auto t = map.find(target - nums[i]);
            if(t != map.end() && t->second != i){
                return vector<int>{i, t->second};
            }
            
        }
        return vector<int>{};
    }
};
