class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(0,nums.size()-1,nums);
        return nums;
    }
    void mergeSort(int l,int h,vector<int> &nums){
        if(l<h){
            int mid=(l+h)/2;
            mergeSort(l,mid,nums);
            mergeSort(mid+1,h,nums);
            merge(l,mid,h,nums);
        }
    }
    void merge(int l,int mid,int h,vector<int> &nums){
        vector<int> b;
        int i=l,j=mid+1;
        while(i<=mid && j<=h){
            if(nums[i]<nums[j]){
                b.push_back(nums[i]);
                i++;
            }
            else{
                b.push_back(nums[j]);
                j++;
            }
        }
        for(;j<=h;j++)
        b.push_back(nums[j]);
        for(;i<=mid;i++)
        b.push_back(nums[i]);
        int m=0;
        for(int k=l;k<=h;k++)
        nums[k]=b[m++];
    }
};
