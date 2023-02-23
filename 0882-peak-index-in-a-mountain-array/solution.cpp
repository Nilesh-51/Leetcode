class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low=0,mid,high=arr.size()-1;
        while(low<high){
            mid=(low+high)/2;
            if(arr[mid]<arr[mid+1]){
                low=mid+1;
            }
            else{
                high=mid;
            }
        }
        return low;
    }
};
