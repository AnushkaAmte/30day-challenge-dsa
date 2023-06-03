class Solution {
public:
    int uniquePaths(int m, int n) {
  int n1 = (n-1)+(m-1);
  int r1 = (m-1);
  double ncr =1;
  for(int i=1;i<=r1;i++){
      ncr = ncr*(n1-r1+i)/i;
     
  }

return (int)ncr;
    }
};
