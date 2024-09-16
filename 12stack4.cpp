// VALID PARENTHESIS
#include<iostream>
#include<stack>
using namespace std;


bool isValidParenthesis(string s)
{
    stack<char> st;
    for(int i=0;i<s.length();i++){
        // if parenthesis is opening,push to stsck
        char ch=s[i];
       if(ch=='{' || ch=='[' || ch=='('){
           st.push(ch);
       }
       //if parenthesis is closing compare from stack
       else{
           if (!st.empty()) {
             char topele = st.top();
             if ((ch == '}' && topele =='{') || (ch == ']' && topele =='[') || (ch == ')' && topele =='(')){
                 st.pop();
             }
             else{
                 return false;
             }
           } 
           else { // if stack is empty and parentesis is closing
                    //  this means no opening parenthesis before
             return false;
           }
       }
    }
    if(st.empty())
    return true;
    else{
        return false;
    }
}

int main(){

return 0;
}