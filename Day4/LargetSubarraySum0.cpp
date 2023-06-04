#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
  int n = arr.size();
   unordered_map<int,int> freq; 
    int ans = 0;
    int sum = 0; 
    for(int i = 0;i<n;i++) {
        sum += arr[i]; 
        if(sum == 0) {
            ans = i + 1; 
        }
        else {
            if(freq.find(sum) != freq.end()) {
                ans = max(ans, i - freq[sum]); 
            }
            else {
                freq[sum] = i;
            }
        }   
    }
    return ans;
}
