// REVERSE AN INTEGER BUT RETURN 0 WHEN IT EXCEEDS RANGE
    //  [-2^31,(2^31)-1]


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<n<<endl;
    int ans=0;
    while(n!=0){
         int digit=n%10;
         if((ans>INT_MAX/10)||(ans<INT_MIN/10)){
            cout<<0;
         }
         ans=(ans*10)+digit;
         n=n/10;
    }
    cout<<ans;
    return 0;
}