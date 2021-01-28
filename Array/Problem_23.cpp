/*
Maximum Product Subarray

https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1
*/

int maxProduct(vector<int>& nums) {
    if(nums.size()==0)return -1;
    int minProduct=nums[0];
    int maxProduct= nums[0];
    int ans=nums[0];
    int choice1,choice2;
    for(int i=1;i<nums.size();i++)
    {
        choice1=minProduct*nums[i];
        choice2=maxProduct*nums[i];
        minProduct=min(nums[i],min(choice1,choice2));
        maxProduct=max(nums[i],max(choice1,choice2));
        ans=max(maxProduct,ans);
    }
    return ans;
    }