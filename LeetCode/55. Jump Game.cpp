class Solution {
public:
    bool canJump(vector<int>& n) {
        int j = n.size()-1;
        for(int i=n.size()-2;i>=0;i--){
            if(i+n[i]>=j) j=i;
        }
        return j==0;
    }
};