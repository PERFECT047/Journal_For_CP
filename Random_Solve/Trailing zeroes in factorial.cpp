class Solution
{
public:
    int trailingZeroes(int N)
    {
        int sol=0;
        int n=5;
        while(n<=N){
            sol+=(N/n);
            n=n*5;
        }
        return sol;
    }
};
