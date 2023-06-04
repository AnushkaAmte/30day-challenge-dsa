#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    int n = arr.size(); 
    int temp = 0;
    map<int, int> freq; 
    freq[temp]++; 
    int count = 0;

    for (int i = 0; i < n; i++) {
        
        temp = temp ^ arr[i];
        int k = temp ^ x;
        count += freq[k];
        freq[temp]++;
    }
    return count;
}
