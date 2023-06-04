class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        int n= nums.size();
        unordered_map<int,int> map;
        for(int i=0;i<n;i++){
           
           
            if(map.find(target-nums[i])==map.end())
            {
            map[nums[i]] =i;
            }
            else
            {
                v.push_back(map[target-nums[i]]);
                v.push_back(i);
            }
        }

        return v;
    }
};
