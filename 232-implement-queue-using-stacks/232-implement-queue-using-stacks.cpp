class MyQueue {
public:
    stack<int> input ;
    stack<int> output ;
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        int res = 0;
        if(output.empty() == false)
        {
            res = output.top();
            output.pop();
            return res;
        }
        while(input.empty() == false)
        {
            output.push(input.top());
            input.pop();
        }
        res = output.top();
        output.pop();
        return res;
    }
    
    int peek()
    {
          int res = 0;
        if(output.empty()== false)
        {
            res = output.top();
            return res;
        }
        while(input.empty() == false)
        {
            output.push(input.top());
            input.pop();
        }
        res = output.top();
        return res;   
    }
    
    bool empty() {
        return input.empty() && output.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */