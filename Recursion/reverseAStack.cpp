class Solution
{
    public:
    void insert(stack<int> &s, int k){
        if(s.empty()){
            s.push(k);
            return ;
        }
        int temp = s.top();
        s.pop();
        insert(s, k);
        s.push(temp);
        return ;
    }
    void reverseStack(stack<int> &s){
        if(s.empty() || s.size() == 1)
            return;
        int temp = s.top();
        s.pop();
        reverseStack(s);
        insert(s, temp);
        return ;
    }
};
