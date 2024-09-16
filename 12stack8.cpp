// REDUNDENT BRACKETS
#include<iostream>
#include<stack>
using namespace std;
 
bool findRedundantBrackets(string &s)
{
     stack<char> st;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
       if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/'){
           st.push(ch);
       }
       else{
           if(ch == ')'){
               bool redundent=true;
               while(!st.empty() && st.top() != '('){
                   if(st.top() == '+' || st.top() == '-' || st.top() == '/' || st.top() == '*'){
                       redundent=false;
                   }
                   st.pop();
               }
               if(redundent == true){
                   return true;
               }
               st.pop();
           }
       }
    }
    return false;
}

int main(){

return 0;
}