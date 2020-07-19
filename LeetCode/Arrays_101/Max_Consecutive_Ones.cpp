class Solution {
public:
  string addBinary(string a, string b) {
    string s = "";
    int n = a.size(), m = b.size();
    int carry = 0;
    
    int i = n - 1, j = m - 1;
    while(i>=0 || j>=0 || carry>0) {
      if(i>=0) {
        carry += a[i] - '0';
        i -= 1;
      }
      if(j>=0) {
        carry += b[j] - '0';
        j -= 1;
      }
      s += (carry%2) + '0';
      carry /= 2;
    }
    reverse(s.begin(), s.end());
     return s;
  }
};
