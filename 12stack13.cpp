// MAX RECTANGLE
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// SOLUTION O(m*n)  
class Solution{
  private:
  vector<int> nextSmallerElement(int* arr, int n)
    {
    vector<int> ans(n);
    stack<int> s;
    s.push(-1);
    for(int i=n-1;i>=0;i--){
      while (s.top() != -1 && arr[s.top()] >= arr[i]) {
        s.pop();
      }
      ans[i] = s.top();
      s.push(i);
    }
    return ans;
}

vector<int> previoussmallelement(int* arr, int n)
    {
    vector<int> ans(n);
    stack<int> s;
    s.push(-1);
    for(int i=0;i<n;i++){
      while (s.top() != -1 && arr[s.top()] >= arr[i]) {
        s.pop();
      }
      ans[i] = s.top();
      s.push(i);
    }
    return ans;
}
    int largestRectangleArea(int* heights,int n) {
        
        vector<int> next=nextSmallerElement(heights,n);
        vector<int> prev=previoussmallelement(heights,n);
        
        int ans=0;
        for(int i=0;i<n;i++){
            int height=heights[i];
            if(next[i] == -1){
                next[i]=n;
            }
            int breadth=next[i]-prev[i]-1;
            int current_ans=height*breadth;
            ans=max(ans,current_ans);
        }
        return ans;
    }
  public:
       int maxArea(int M[][INT_MAX], int n, int m) {   // I PASSED M[][INT_MAX] as it requires so
        
        // CALCULATE FOR FIRST ROW
        int ans=largestRectangleArea(M[0],m);
        
        // CALCULATE FOR REST OF ROWS
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(M[i][j] != 0)
                   M[i][j]=M[i][j]+M[i-1][j];
                else
                   M[i][j]=0;
            }
            // NOW WE ADDED PREVIOUS ROWS
            ans=max(ans,largestRectangleArea(M[i],m));
        }
        return ans;
    }
};
int main(){

return 0;
}