// SQUARE ROOT OF A NUMBER
#include<iostream>
using namespace std;
int sqrt(int number){
    int s=0,e=number;
    long long int mid=s+((e-s)/2);
    int ans=-1;
    while(s<e){
        long long int square=mid*mid;
        if(square==number){
            return mid;
        }
        if(square>number){
            e=mid-1;
            ans=mid;
        }
        else if(square<number){
            s=mid+1;
            ans=mid;
        }
        mid=s+((e-s)/2);
    }
    return ans;
}
double precisition(int pre,int temp,int n){
    double ans=temp;
    double factor=1;
    for(int i=0;i<pre;i++){
        factor=(factor/10);
        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}
int main(){
      int number;
      cin>>number;
      //cout<<sqrt(number)<<endl;
      int temp=sqrt(number);
      cout<<precisition(6,temp,number);
      
}