class Solution
{
    public:
    void deleteMid(stack<int>&s, int sizeOfStack){
        if(s.size() == 1 || s.size() == (ceil(sizeOfStack/2.0)) ){
            s.pop();
            return;
        }
        int temp = s.top();
        s.pop();
        deleteMid(s, sizeOfStack);
        s.push(temp);
        return;
    }
};
