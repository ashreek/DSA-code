// RETURN COMPLEMENT OF GIVEN INTEGER IN BASE 10

#include<iostream>
using namespace std;


int main()
{
   int n;
   cin>>n;
   int m=n;
   //EDGE CASE
   if(n==0){
        cout<<1;
    }
   int mask=0;
   while(((m) !=0)){
    mask=((mask<<1)|1);
    m=m>>1;

    }
    
    int answer=(~n)&mask;
    cout<<answer;   
    return 0;
}