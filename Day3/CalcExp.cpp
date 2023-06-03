class Solution {
public:
    double myPow(double x, int n) {
         double ans=1.00000;

 while(n){
   if(n%2==1&&n>0){
   ans = ans*x;
   n--;
   }
   else if(n%2==-1 && n<0){
      ans = ans/x;
      n++;
   }

   x = x*x;
   n = n/2;

 }
 return ans;
    }
};
