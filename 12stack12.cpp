// CELEBRITY PROBLEM
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        for(int i=0;i<n;i++){
            bool row=true;
            bool col=true;
            
            for(int j=0;j<n;j++){
                if(M[i][j] == 1){
                    row=false;
                    break;
                }
            }
            for(int j=0;j<n;j++){
                if(M[j][i] == 0 && i != j){
                    col=false;
                    break;
                }
            }
            
            if(row && col){
                return i;
                break;
            }
        }
        return -1;
    }
};

// APPROACH 2 O(N)
class Solution 
{
    private:
    bool knows(vector<vector<int> >& M, int a,int b){
        if(M[a][b] == 1){
            return true; 
        }
        else{
            return false;
        }
    }
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity2(vector<vector<int> >& M, int n) 
    {
       stack<int> s;
       
       // push all elements to stack
       for(int i=0;i<n;i++){
           s.push(i);
       }
       
       // till stack size is 1 
       while(s.size() > 1){
           int a=s.top();
           s.pop();
           int b=s.top();
           s.pop();
           
           // if a knows b => a isn't a celebrity
           // if a doesn't knows b => b isn't a celbrity
           if(knows(M,a,b)){
               s.push(b);
           }
           else{
               s.push(a);
           }
       }
       
       // NOW STACK HAVE ONLY ONE POTENTIAL CANDIDATE
       int ans=s.top();
       
       // verify
       int rowcnt=0;
       int colcnt=0;
       
       for(int i=0;i<n;i++){
           if(M[ans][i] == 0){
               rowcnt++;
           }
           if(M[i][ans] == 1){
               colcnt++;
           }
       }
       if(rowcnt == n && colcnt == n-1){
           return ans;
       }
       else{
           return -1;
       }
    }
};
int main(){

return 0;
}