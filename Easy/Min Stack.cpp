class MinStack {
private:
    vector<int> s;
    
public:
    void push(int x) {
        s.push_back(x);
    }
    
    void pop() {
        s.pop_back();
    }
    
    int top() {
        return s.back();
    }
    
    int getMin() {
        return *min_element(s.begin(), s.end());
    }
};
