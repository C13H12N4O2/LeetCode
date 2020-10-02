class MyStack {
private:
    queue<int> s;
    
public:
    void push(int x) {
        s.push(x);
        for (decltype(s.size()) i = 0; i != s.size() - 1; ++i) {
            s.push(s.front());
            s.pop();
        }
    }
    
    int pop() {
        int n = s.front();
        s.pop();
        
        return n;
    }
    
    int top() {
        return s.front();
    }
    
    bool empty() {
        return s.empty();
    }
};
