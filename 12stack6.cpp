// REVERSE A STACK USING RECURSION
#include<iostream>
#include<stack>
using namespace std;

void insertatbottom(stack<int> &stack,int num){
    // base case
    if(stack.empty()){
        stack.push(num);
        return ;
    }

    int element=stack.top();
    stack.pop();

    insertatbottom(stack,num);
    stack.push(element);
}

void reverseStack(stack<int> &stack) {
    // base case
    //when stack is empty
    if(stack.empty()){
        return ;
    }
    
    int num=stack.top();
    stack.pop();

    reverseStack(stack);
    insertatbottom(stack,num);
}
int main(){

return 0;
}