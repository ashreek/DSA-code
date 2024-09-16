// DELETE MID IN A STACK
#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&inputStack,int cnt,int size){
   // BASE CASE
   if(cnt == size/2){
      inputStack.pop();
      return;
   }

   // STORE TOP ANSWERS WHILE POPING
   int ans=inputStack.top();
   inputStack.pop();

   solve(inputStack,cnt+1,size);
   inputStack.push(ans);
}
void deleteMiddle(stack<int>&inputStack, int N){
	int cnt=0;

   solve(inputStack,cnt,N);
}
int main(){

return 0;
}