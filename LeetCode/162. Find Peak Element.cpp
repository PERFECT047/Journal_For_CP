class Solution {
public:
    int findPeakElement(vector<int>& n) {
        int lo = 0;
        int hi = n.size()-1;
        
        while(lo < hi)
        {
            int mid = (lo+hi)/2;
            if(n[mid] < n[mid+1])
                lo = mid+1;
            else
                hi = mid;
        }
        return lo;
    }
};