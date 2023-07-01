class Data{
    public:
    int freq,val;
    Data(int f,int v){
        freq=f;
        val=v;
    }
};
struct myComp{
bool operator()(Data &a,Data &b){
    return a.freq>b.freq;
}
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        priority_queue<Data,vector<Data>,myComp> pq;
        vector<int> res;
        int n=nums.size();
        for(int i=0;i<n;i++){
                mp[nums[i]]++;
        }
        for(auto i:mp){
            Data d(i.second,i.first);
            pq.push(d);
            if(pq.size()>k)
            pq.pop();
        }
        for(int i=0;i<k;i++){
            res.push_back(pq.top().val);
            pq.pop();
        }
        return res;
    }
};
