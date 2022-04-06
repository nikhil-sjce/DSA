class Solution{
    int minEle = INT_MAX;
    stack<int> s;
    public:
    
        /*returns min element from stack*/
        int getMin(){
           if(s.size() == 0){
               return -1;
           }else{
               return minEle;
           }
           //Write your code here
        }
       
        /*returns poped element from stack*/
        int pop(){
           if(s.size() == 0){
               return -1;
           }else{
               if(s.top() >= minEle){
                   int x = s.top();
                   s.pop();
                   return x;
               }else if(s.top() < minEle){
                   int x = minEle;
                   minEle = 2*minEle - s.top();
                   s.pop();
                   return x;
               }
           }
           //Write your code here
        }
       
        /*push element x into the stack*/
        void push(int x){
           if(s.size() == 0){
               s.push(x);
               minEle = x;
           }else{
               if(x >= minEle){
                   s.push(x);
               }else if(x < minEle){
                   int temp = 2*x - minEle;
                   s.push(temp);
                   minEle = x;
               }
           }
           //Write your code here
        }
};