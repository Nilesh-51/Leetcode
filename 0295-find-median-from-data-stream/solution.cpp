class MedianFinder {
    priority_queue<int,vector<int>,greater<int>> minHeap;
    priority_queue<int> maxHeap;
public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(maxHeap.empty() && minHeap.empty()){
            maxHeap.push(num);
        }
        else{
            if(maxHeap.top()<num){
                minHeap.push(num);
            }
            else{
                maxHeap.push(num);
            }
        }
        int sz=maxHeap.size()-minHeap.size();
        if(abs(sz)>1){
            if(maxHeap.size()>minHeap.size()){
                minHeap.push(maxHeap.top());
                maxHeap.pop();
            }
            else{
                maxHeap.push(minHeap.top());
                minHeap.pop();
            }
        }
    }
    
    double findMedian() {
        int sz=minHeap.size()+maxHeap.size();
        if(sz%2==0)
        return (minHeap.top()+maxHeap.top())/2.0;
        else{
            if(minHeap.size()>maxHeap.size()){
                return minHeap.top();
            }
            else
            return maxHeap.top();
        }
        return -1;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
