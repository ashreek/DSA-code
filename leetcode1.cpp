//EASY
//SUBTRACT THE PRODUCT SUM OF DIGITS
#include<iostream>
using namespace std;
int main(void){
    int n=234;
    //cin>>n;
    int sum=0,product=1;
    while(n!=0){
        int dig=n%10;
        int product=dig*product;
        int sum=dig+sum;
        n=n/10;
    }
    int difference=product-sum;
    cout<<difference;
}