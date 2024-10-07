class MovingAverage {
public:
    queue<int> dq;
    int s;
    int sum;
    MovingAverage(int size) {
        s=size;
        sum=0;
        dq= queue<int>();
    }
    
    double next(int val) {
        if(dq.size() == s ){
            sum -=dq.front();
            dq.pop();
        }
        dq.push(val);
        int size = dq.size();
        sum += val;
        return (double)sum/size;
    }
    
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */
