class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        int sol=0;
        for(int i=1;i<=n;i++) sol=sol^i;
        for(int ele:array) sol = sol^ele;
        return sol;
    }
};