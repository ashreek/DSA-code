// REVERSE A STRING USING STACK
#include<iostream>
#include<stack>
using namespace std;

int main(){
 string name="Ashreek";
 stack<char> st;

 // PUSH EACH CHARACTER OF STRING TO STACK
 for(int i=0;i<=name.length()-1;i++){
    st.push(name[i]);
 }

int i=0;
 while(!st.empty()){
    name[i]=st.top();
    st.pop();
    i++;
 }

 cout<<name;
return 0;
}