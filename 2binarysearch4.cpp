// SERACH IN A ROTATED SORTED ARRAY

#include<iostream>
using namespace std;
int binarysearch(int arr[],int s,int e,int key){
    int start=s;
    int end=e;
    int mid=(start)+((end-start)/2);
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            start=mid+1;
        }
        if(arr[mid]>key){
            end=mid-1;
        }
        mid=start+((end-start)/2);
        //cout<<"TIME 1 ";
    }
    return -1;
}
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
int searchinsorted(int arr[],int n,int k){
    int pivot=getpivot(arr,n);
    
       if(pivot<= k && k <= arr[n-1]){
        int end=n-1;
        return binarysearch(arr,pivot,end,k);
       }
       else{
        return binarysearch(arr,0,pivot-1,k);
       }
       
}
int main()
{
    int arr[8]={10,11,16,5,6,7,8,9};
    int n=7;
    int n2=4;
    cout<<searchinsorted(arr,8,n)<<endl<<searchinsorted(arr,8,n2);
    return 0;
}