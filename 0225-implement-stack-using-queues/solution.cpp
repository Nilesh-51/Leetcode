class MyStack {
    queue<int> Stack;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        Stack.push(x);
        int sz=Stack.size();
        for(int i=0;i<sz-1;i++){
            Stack.push(Stack.front());
            Stack.pop();
        }
    }
    
    int pop() {
        int res=Stack.front();
        Stack.pop();
        return res;
    }
    
    int top() {
        return Stack.front();
    }
    
    bool empty() {
        return Stack.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
