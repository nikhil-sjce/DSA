#include <bits/stdc++.h>
using namespace std;
class comp{
  public :
    bool operator()(pair<int,int>p1, pair<int,int>p2){
        if(p1.first > p2.first)
            return false;
        else if(p1.first == p2.first){
            if(p1.second < p2.second)
                return false;
            else
                return true;
        }
        else if(p1.first < p2.first)
            return true;
    }
};
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        priority_queue<pair<int,int>, vector<pair<int,int>>, comp>minHp;
        unordered_map<int,int>um;
        vector<int>v;
        for(int i=0;i<n;i++)
            um[a[i]]++;
        for(auto x : um)
            minHp.push({x.second, x.first});
        while(!minHp.empty()){
            int temp = minHp.top().first;
            while(temp--)
                v.push_back(minHp.top().second);
            minHp.pop();
        }
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        cout<<endl;
    t--;
    }
    return 0;
}