//TC:O(n)
//SC:O(1)

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        
   int br=-1;
   for(int i=(n-2);i>=0;i--){
    if(nums[i]<nums[i+1]){
    br = i;
    break;
    }
   }
if(br==-1){
    reverse(nums.begin(),nums.end());
}
else{
    for(int i=(n-1);i>br;i--){
        if(nums[br]<nums[i]){
        swap(nums[br],nums[i]);
        break;
        }
    }

    reverse(nums.begin()+br+1,nums.end());
}

for(int i=0;i<n;i++)
cout<< nums[i]<<" ";
    }
};
