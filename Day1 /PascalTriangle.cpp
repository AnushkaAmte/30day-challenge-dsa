//TC:O(r)
//SC:O(1)
class Solution {
public:
vector<int> combi(int n){
    vector<int> row;
    row.push_back(1);
    int res=1;
    for(int i=0;i<n;i++){
        res *= (n-i);
        res /= (i+1);
        row.push_back(res);
    }

    return row;
}
    vector<vector<int>> generate(int numRows) {

vector<vector<int>> nums;
        for(int i=1;i<=numRows;i++){
    
    nums.push_back(combi(i-1));
}
    return nums;
    }
};
