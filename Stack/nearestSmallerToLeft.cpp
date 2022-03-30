vector<int> Smallestonleft(int arr[], int n){
    vector<int>v;
    stack<int>s;
    for(int i=0;i<n;i++){
        if(s.empty()){
            v.push_back(-1);
            s.push(arr[i]);
        }else if(s.top() < arr[i]){
            v.push_back(s.top());
            s.push(arr[i]);
        }else{
            while(!s.empty() && s.top() > arr[i]){
                s.pop();
            }
            if(s.empty()){
                v.push_back(-1);
                s.push(arr[i]);
            }else if(s.top() < arr[i]){
                v.push_back(s.top());
                s.push(arr[i]);
            }
        }
    }
    return v;
}