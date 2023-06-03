class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n= nums.size();
   map<int,int> freq;
   vector<int> ans;
   for(int i=0;i<n;i++){
      freq[nums[i]]++;
   }

for(auto it: freq){
   if(it.second>floor(n/3)){
      ans.push_back(it.first);
   }
}
return ans;
    }
};
