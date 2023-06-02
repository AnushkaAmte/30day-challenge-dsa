//TC:O(NlogN)
//SC:O(1)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
          int rep= -1;
sort(nums.begin(),nums.end());
for(int i=0;i<n-1;i++){
   if(nums[i]==nums[i+1]){
       rep = nums[i];
      break;
   }
}
  return rep;
    }
};
