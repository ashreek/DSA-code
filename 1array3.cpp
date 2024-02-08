// LeetCode Duplicate in an Array
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //int arr[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,8,15,16,17,18,19};
      int arr[5]={1,2,3,3,4};
    //MY APPROACH ACCEPTED
    // for(int i=0;i<20;i++){
    //     for(int j=0;j<20;j++){
    //         if((arr[i]==arr[j])&&(i != j) && (i<j)){
    //             cout<<arr[j]<<endl;
    //         }
    //     }
    // }
    //cout<<"Completly ran!";

    //LB APPROACH
    // 0^1^2^3^4^3 ^1^2^3^4;
    int ans=0;
    for(int i=0;i<5;i++){
         ans=ans^arr[i];
    }
    for(int i=0;i<5;i++){
         ans=ans^i;
    }
    cout<<(ans);
    return 0;
}