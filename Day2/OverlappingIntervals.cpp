//TC:O(NlogN)
//SC:O(N)

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
       sort(intervals.begin(),intervals.end());
vector<vector<int>> arr;
for(int i=0;i<n;i++)
   {
    
      if(arr.empty() || intervals[i][0]>arr.back()[1])
         arr.push_back(intervals[i]);
      else{
         arr.back()[1] = max(arr.back()[1],intervals[i][1]);
      }
   } 
   return arr;
    }
};
