// PIVOT IN AN SORTED AND ROTATED ARRAY
#include<iostream>
using namespace std;
int getpivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int m=s+((e-s)/2);
    while(s<e){
        if(arr[m]>=arr[0]){
            s=m+1;
        }
        else if(arr[m]<arr[0]){
            e=m;
        }
        m=s+((e-s)/2);
    }
    return arr[m];
}
int main()
{
    int ar[8]={10,11,16,5,6,7,8,9};
    int arr[5]={3,8,10,17,1};
    int ans=getpivot(arr,5);
    int a[5]={7,9,1,2,3};
    cout<<getpivot(a,5)<<endl<<getpivot(ar,8)<<endl;
    cout<<ans;
    
    return 0;
}