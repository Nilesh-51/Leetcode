class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(),nums.end());
    }
    void swap(int &a,int &b){
        int temp=a;
        a=b;
        b=temp;
    }
};
