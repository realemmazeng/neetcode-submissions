class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> s;

        for (int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];

            if (s.contains(diff)){
                return {s[diff],i};
            } else {
                s[nums[i]] = i;
            }
        } 
    }
};
