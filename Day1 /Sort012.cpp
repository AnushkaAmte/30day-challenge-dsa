//TC:O(n)
//SCO(1)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
            int c1=0;
    int c2=0;
    int c3=0;
    for(int i=0;i<n;i++){
        if(nums[i]==0)
        c1++;
        else if(nums[i]==1)
        c2++;
        else if(nums[i]==2)
        c3++;
    }
nums.clear();

for(int i=0;i<c1;i++)
nums.push_back(0);
for(int i=0;i<c2;i++)
nums.push_back(1);
for(int i=0;i<c3;i++)
nums.push_back(2);


    }
};
