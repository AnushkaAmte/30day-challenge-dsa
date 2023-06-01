//TC:O(m*n)
//SC:O{m}

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n= matrix.size();
        int m = matrix[0].size();
        vector<pair<int,int>> store;
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(matrix[i][j]==0){
            store.push_back(make_pair(i,j));
        }
    }
 }
 
 for(int i=0;i<store.size();i++){
    int row = store[i].first;
    int col= store[i].second;
  for(int j=0;j<m;j++){
        matrix[row][j]=0;
    }
    for(int i=0;i<n;i++){
        matrix[i][col]=0;
    }
 }
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
       cout<<matrix[i][j]<<" ";
    }
 }
}
    
};
