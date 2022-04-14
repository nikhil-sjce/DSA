class Solution{
    public:
    void insert(vector<int> &v, int n){
        if(v.size() == 0 || v[v.size()-1] <= n){
            v.push_back(n);
            return ;
        }
        int temp = v[v.size() - 1];
        v.pop_back();
        insert(v, n);
        v.push_back(temp);
        return ;
    }
    void sort(vector<int> &v){
        if(v.size() == 0 || v.size() == 1 )
            return ;
        int temp = v[v.size()-1];
        v.pop_back();
        sort(v);
        insert(v, temp);
    }
    vector<int> sortArr(vector<int>v, int n){
        sort(v);
        return v;
    }
};