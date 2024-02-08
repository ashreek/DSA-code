// BOOK ALLOCATION PROBLEM
#include<iostream>
using namespace std;
bool istrue(int arr[],int n,int m,int mid){
     int nopages=0;
     int students=1;

     for(int i=0;i<n;i++){
        if(nopages+arr[i]<=mid){
            nopages=nopages+arr[i];
        }
        else{
            students++;
            if(students>m || arr[i]>mid){
                return false;
            }
            nopages=arr[i];
        }
     }
     return true;
}
int bookallocate(int arr[],int n,int m){
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int e=sum;
    int mid=s+((e-s)/2);
    int ans=-1;
    while(s<=e){
        if(istrue(arr,n,m,mid)){
          ans=mid;
          e=mid-1;
        }
        else{
             s=mid+1;
        }
        mid=s+((e-s)/2);
    }
    return ans;
}
int main(){
 int arr[4]={10,20,30,40};
 cout<<bookallocate(arr,4,2);
return 0;
}