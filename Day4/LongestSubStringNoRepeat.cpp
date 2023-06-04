class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    if(s.size()==0)
      return 0;
  int ans = INT_MIN;
  unordered_set < int > set;
  int left = 0;
  for (int right = 0; right < s.length(); right++) 
  {
    if (set.find(s[right]) != set.end()) 
    {
      while (left < right && set.find(s[right]) != set.end()) {
        set.erase(s[left]);
        left++;
      }
    }
    set.insert(s[right]);
    ans = max(ans, right - left + 1);
  }
  return ans;
    }
};
