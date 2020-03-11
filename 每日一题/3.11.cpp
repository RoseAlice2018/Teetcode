#include<vector>
using namespace std;
class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) 
    {
        int sum=0;
        for(int i=0;i<A.size();i++)
        {
            sum+=A[i];
        }
        if(sum%3==0)
        {
            int temp=0;
            int count=0;
            for(int i=0;i<A.size();i++)
            {
                temp+=A[i];
                if(temp==sum/3)
                {
                    count++;
                    temp=0;
                }
            }
            if(count==3||(count>3&&sum==0))
                return true;
        }
        else
        {
            return false;
        }
        

    }
};