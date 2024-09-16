// sort a stack using recursion
#include<iostream>
#include<stack>
using namespace std;

void insertatposition(stack<int> &stack,int num){
	// when every elemnt in stack is smaller tahn num
	if(stack.empty()){
		stack.push(num);
		return;
	}
    // when some elments larger than num
	if(num > stack.top()){
		stack.push(num);
		return;
	}

	int element=stack.top();
	stack.pop();
    
	// preserve taken out elment call recursivly
	insertatposition(stack,num);
    // push back taken out element
	stack.push(element);
}
void sortStack(stack<int> &stack)
{
	if(stack.empty()){
		return; 
	}

	int num=stack.top();
	stack.pop();
    
	sortStack(stack);
	insertatposition(stack,num);
}
int main(){

return 0;
}