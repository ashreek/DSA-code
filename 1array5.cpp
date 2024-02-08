// INTERSECTION OF TWO ARRAY
#include<iostream>
using namespace std;

int main()
{
    //NON OPTIMIZED
    // int ar1[6]={1,2,3,4,8,8};
    // int ar2[4]={4,7,8,9};
    // for(int i=0;i<6;i++){
    //     for(int j=0;j<4;j++){
    //         if(ar1[i]==ar2[j]){
    //             cout<<ar1[i]<<endl;
    //             ar2[j]=-1;
    //         }
    //     }
    // }

// 2nd optimized
// int ar1[6]={1,2,3,4,8,8};
//     int ar2[4]={4,7,8,9};
//     for(int i=0;i<6;i++){
//         int j=0;
//         while(ar1[i]<ar2[j]){
//             j++;
//         }
//         for(j;j<4;j++){
//             if(ar1[i]<ar2[j]){
//                 break;
//             }
//             if(ar1[i]==ar2[j]){
//                 cout<<ar1[i]<<endl;
//                 ar2[j]=-1;
//             }
//         }
//     }


//third optimized
 int ar1[6]={1,2,3,4,8,8};
 int ar2[4]={4,7,8,9};
int i=0,j=0;
while(i<6 && j<4){
      if(ar1[i]==ar2[j]){
        cout<<ar1[i]<<" ";
        i++;
        j++;
      }
      else if(ar1[i]<ar2[j]){
        i++;
      }
      else{
        j++;
      }
}

    return 0;
}