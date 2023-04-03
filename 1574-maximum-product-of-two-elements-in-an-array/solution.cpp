class Solution {
public:
    int maxProduct(vector<int>& nums) {
    priority_queue<int> q;
    int a,b;
    for(int i=0;i<nums.size();i++){
        q.push(nums[i]);
    }
    a=q.top();
    q.pop();
    b=q.top();
    return (a-1)*(b-1);
    }
};
