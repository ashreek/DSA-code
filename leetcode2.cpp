#include<iostream>
using namespace std;
class Solution {
public:
    
    int hammingWeight(unsigned int n) {
        
        int count=0;
        while(n!=0){
           if(n&1){
               count++;
               }
               n=n>>1;
        }
        return count;
    }
};
    int main(void){
        int num=15;
        //cin>>num;
        Solution obj;
        cout<<obj.hammingWeight(num);
    }
