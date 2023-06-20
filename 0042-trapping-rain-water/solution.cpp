class Solution {
public:
    int trap(vector<int>& height) {
        int l=0,r=height.size()-1;
        int maxL=0,maxR=0;
        int res=0;
        while(l<r){
            if(height[l]<=height[r]){
                if(maxL<height[l])maxL=height[l];
                else
                res+=(maxL-height[l]);
                l++;
            }
            else{
                if(maxR<height[r])maxR=height[r];
                else
                res+=(maxR-height[r]);
                r--;
            }
        }
        return res;
    }
};
