class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>indeg(n+1);
        vector<int>outdeg(n+1);
        indeg[0]=-1;
        outdeg[0]=-1;
        for(auto it:trust){
            indeg[it[1]]++;
            outdeg[it[0]]++;
        }
        for(int i=0;i<=n;i++){
            if(indeg[i]==(n-1) && outdeg[i]==0){
                return i;
            }
        }
        return -1;
    }
};