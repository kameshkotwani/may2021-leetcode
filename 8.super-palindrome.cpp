class Solution {
public:
   int ans=0;  
  void helper(long x, int m, int M, long double lb, long double ub){
      if (x > ub)
      return;
      if (x >= lb && is_palindrome(x * x))
      ans++;
      for (int i = 1; m + 2 * i <= M; i++) {
         long W = powl(10, m + 2 * i - 1) + 1;
         long w = powl(10, i);
         for (int z = 1; z <= 9; z++)
         helper(z * W + x * w, m + 2 * i, M, lb, ub);
      }
   }
   bool is_palindrome(long x){
      if (x == 0)
      return true;
      if (x % 10 == 0)
      return false;
      long left = x, right = 0;
      while (left >= right) {
         if (left == right || left / 10 == right)
         return true;
         right = 10 * right + (left % 10), left /= 10;
      }
      return false;
   }
    int superpalindromesInRange(string L , string R) {
     
      long double lb = sqrtl(stol(L)), ub = sqrtl(stol(R));
      int M = log10l(ub) + 1;
      for (int z = 0; z <= 9; z++) {
         helper(z, 1, M, lb, ub);
         helper(11 * z, 2, M, lb, ub);
      }
      return ans;
    }
};
