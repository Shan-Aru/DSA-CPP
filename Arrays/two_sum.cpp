class Solution{
    public:
    vector<int>findtargetsum(vector<int>&arr)
    {
        int left=0,right=0,sum=0;
        while(left<right)
        {
            if(sum==left+right)
            {
                return{i,j};
            }
            else if(sum<target)
            {
                left++;
            }
            else{
                right--;
            }
        }
        return {-1,-1};
    }
}