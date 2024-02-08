// PEAK ELEMENT IN SORTED AND ROTATED ARRAY
#include<iostream>
using namespace std;
int peakelement(int arr[],int n){
    int start=0,end=n-1;
    int mid=start+((end-start)/2);
    while(start<end){
        
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        
        mid=start+((end-start)/2);
    }
    return arr[mid];
}
int main()
{
    int arr[4]={0,10,5,2};
    int ar2[10]={1,2,3,8,7,6,4,3,2,1};
    cout<<peakelement(arr,4)<<endl<<peakelement(ar2,10);
    
    return 0;
}