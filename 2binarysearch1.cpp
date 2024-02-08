// first and last occarence of an element in an sorted array
#include<iostream>
using namespace std;
int firstoccr(int ar[],int n,int key){
    int s=0,e=n-1;
    int m=s+((e-s)/2);
    int ans=-1;
    while(s<=e){
        if(ar[m]==key){
            ans=m;
            e=m-1;
    }
        if(ar[m]<key){
            s=m+1;
        }
        else if(ar[m]>key){
            e=m-1;
        }
        m=s+((e-s)/2);
    }
    return ans;
}
int secondoccr(int ar[],int n,int key){
    int s=0,e=n-1;
    int m=s+((e-s)/2);
    int ans=-1;
    while(s<=e){
        if(ar[m]==key){
           ans=m; 
           s=m+1;
          //ans=m;
    }
        if(ar[m]<key){
            s=m+1;
        }
        else if(ar[m]>key){
            e=m-1;
        }
        m=s+((e-s)/2);
    }
    return ans;
}
int main()
{
    int arr[10]={1,2,3,5,5,5,5,5,5,6};
    int key;
    cin>>key;
    cout<<firstoccr(arr,10,key)<<endl<<secondoccr(arr,10,key);
    return 0;
}