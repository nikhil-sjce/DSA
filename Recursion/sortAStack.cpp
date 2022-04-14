// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void insert(stack<int> &s, int k){
    if(s.empty() || s.top() <= k){
        s.push(k);
        return ;
    }
    int temp = s.top();
    s.pop();
    insert(s, k);
    s.push(temp);
    return;
}
void sortIt(stack<int> &s){
    if(s.empty() || s.size() == 1)
        return;
    int temp = s.top();
    s.pop();
    sortIt(s);
    insert(s, temp);
    return ;
}
void SortedStack :: sort(){
    sortIt(s);
}