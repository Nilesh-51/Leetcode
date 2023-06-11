class Solution {
public:
    int cnt=0;
    int reversePairs(vector<int>& nums) {
        
        return mergeSort(0,nums.size()-1,nums);
    }
    void merge(int l,int mid,int h,vector<int> &nums){
        vector<int> b;
        int i=l,j=mid+1;
        while(i<=mid && j<=h){
            if(nums[i]<=nums[j]){
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
	int countPairs(int l,int mid,int h,vector<int> &nums){
		int cnt=0;
        int j=mid+1;
        for(int i=l;i<=mid;i++){
            while(j<=h && nums[i]>(2*(long long)nums[j])){
                j++;
                }
            
            cnt+=j-(mid+1);
        }
		return cnt;
    }
int mergeSort(int l,int h,vector<int> &nums){
	int cnt=0;
        if(l<h){
            int mid=(l+h)/2;
            cnt+=mergeSort(l,mid,nums);
            cnt+=mergeSort(mid+1,h,nums);
            cnt+=countPairs(l,mid,h,nums);
            merge(l,mid,h,nums);
        }
		return cnt;
    }
};
