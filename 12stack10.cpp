// NEXT SMALLER ELEMENT
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    vector<int> ans(n);
    stack<int> s;
    s.push(-1);
    for(int i=n-1;i>=0;i--){
        // traverse till arr[i]>s.top()
        while(arr[i]<=s.top()){
            s.pop();
        }
        // now we got answer at top for arr[i]
        ans[i]=s.top();
        s.push(arr[i]);
    }
    return ans;
}
int main(){

return 0;
}