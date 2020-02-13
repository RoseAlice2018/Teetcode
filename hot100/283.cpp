#include<vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        // int last=nums.size()-1;
        int count=0;
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]==0)
            {
                count++;
                for(int j=i;j<nums.size()-1;j++)
                {
                    nums[j]=nums[j+1];
                }
            }
        }
        for(int i=nums.size()-1;count>0;i--)
        {
            nums[i]=0;
            count--;
        }
    }
};