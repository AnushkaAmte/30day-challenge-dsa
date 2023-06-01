//TC:O(n)
//SC:O(1)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max=-10000;
int sum=0;
int n=nums.size();
if(n==1)
max=nums[0];
else{
for(int i=0;i<n;i++){
    sum = sum+nums[i];
    if(sum>max)
    max=sum;
    if(sum<0)
    sum=0;
    
}
}
return max;
    }
};
