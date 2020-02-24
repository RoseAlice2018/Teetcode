#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int all=1;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                all*=nums[i];
            }
            else
            {
                count++;
            }
            
        }
        vector<int> res;
        if(count>=2)
        {
            for(int i=0;i<nums.size();i++)
            {
                res.push_back(0);
            }
        }
        else if(count==1)
        {
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]==0)
                {
                    res.push_back(all);
                }
                else
                {
                    res.push_back(0);
                }                
            }
        }
        else
        {
            for(int i=0;i<nums.size();i++)
            {
                res.push_back(all/nums[i]);
            }
        }
        
        
        return res;
    }
};