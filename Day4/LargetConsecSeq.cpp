class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
int n=nums.size();
if(nums.empty())
 return 0;
sort(nums.begin(),nums.end());
 int ans=1;
 int prev=nums[0];
 int count=1;
 
for(int i=1;i<n;i++){
   if(nums[i]==prev+1){
   ans++;

   }
   else if(nums[i]!=prev){
   ans=1;

   }

   prev=nums[i];
   count=max(ans,count);
}

return count;
    }
};
