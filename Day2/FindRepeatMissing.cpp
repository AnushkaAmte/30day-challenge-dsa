//TC:O(NlogN)
//SC:O(1)
#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 

       int rep= -1;
sort(arr.begin(),arr.end());
for(int i=0;i<n-1;i++){
   if(arr[i]==arr[i+1]){
       rep = arr[i];
      break;
   }
}
  
int total = n*(n+1)/2;
int sum=0;
  for(int i=0;i<n;i++){
   sum = sum+arr[i];
  }
  
pair<int,int> ans = make_pair((total-sum+rep),rep);
  
  return ans;
	
}
