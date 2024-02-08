// POWER OF TWO (INT RANGE)
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // SOLUTION 1
    //  NOT EFFICIRNT SOLN
    // LB SOLUTION
    //     int n;
    //     cin>>n;
    //     int ans=0;
    //     for(int i=0;i<=30;i++){
    //         ans=pow(2,i);
    //         if(ans==n){
    //             cout<<"TRUE";
    //             break;
    //         }

    // }
    // if(n != ans){
    // cout<<"FALSE";
    // }

    // SOLUTION 2
    int n;
    cin >> n;
    int ans = 1;
    for(int i = 0; i <= 30; i++)
    {
        if (ans == n)
        {
            cout << true;
            break;
        }
        if(ans<INT_MAX/2)
        ans = ans * 2;
    }
    if( ans != n){
        cout<<false;
    }
    return 0;
}