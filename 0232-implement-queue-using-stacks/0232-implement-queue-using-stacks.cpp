class MyQueue {
public:
stack<int>input;
        stack<int>output;
        int elPEEK = -1;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(input.empty()){
            elPEEK = x;
        }
        input.push(x); // ye toh har barri karna hai mitr
    }
    // amortized o(1); bharte wqt o(n) then o(1)
    int pop() {
        if(output.empty()){
            //input --> output o(n)
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
        }
        int val = output.top(); //o(1)
        output.pop();
        return val;
    }
    
    int peek() {
        if(output.empty()){
            return elPEEK;
        }
        else{
            return output.top();
        }
    }
    
    bool empty() {
        if(input.empty() && output.empty()){
            return true;
        }
        else{
            return false;
        }
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