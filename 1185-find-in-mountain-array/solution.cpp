/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int low=0,mid,high=mountainArr.length()-1;
        while(low<high){
            mid=low+(high-low)/2;
            if(mountainArr.get(mid)<mountainArr.get(mid+1))
            low=mid+1;
            else
            high=mid;
        }
        int resA=binary_searchA(mountainArr,target,0,low);
        int resD=binary_searchD(mountainArr,target,low+1,mountainArr.length()-1);
        if(resA==-1 && resD==-1){
            return -1;
        }
        if(resA!=-1)
        return resA;
        else
        return resD;
    }
    
    int binary_searchA(MountainArray &arr,int target,int low,int high){
        int mid;
        while(low<=high){
            mid=(low+high)/2;
            if(arr.get(mid)>target){
                high=mid-1;
            }
            else if(arr.get(mid)<target){
                low=mid+1;
            }
            else 
            return mid;
        }
        return -1;
    }
    int binary_searchD(MountainArray &arr,int target,int low,int high){
        int mid;
        while(low<=high){
            mid=(low+high)/2;
            if(arr.get(mid)>target){
                low=mid+1;
            }
            else if(arr.get(mid)<target){
                high=mid-1;
            }
            else 
            return mid;
        }
        return -1;
    }
};
