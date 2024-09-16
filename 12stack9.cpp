// MINIMUM COUNT TO MAKE A STRING VALID
#include<iostream>
#include<stack>
using namespace std;

int findMinimumCost(string str) {
  //check for odd case
  if(str.length()%2==1){
    return -1;
  }
  stack<char> s;
  // traversing string
  for(int i=0;i<str.length();i++){
    char ch=str[i];
    if(ch == '{'){
      s.push(ch);
    }
    else{
      if(!s.empty() && s.top()=='{'){
        s.pop();
      }
      else{
        s.push(ch);
      }
    }
  }
  // MATCHING PART REMOVED
  int a=0,b=0;
  while(!s.empty()){
    if(s.top() == '{'){
      a++;
      s.pop();
    }
    else{
      b++;
      s.pop();
    }
  }
  return ((a+1)/2)+((1+b)/2);
}
int main(){

return 0;
}