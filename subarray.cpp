#include <iostream>
using namespace std;

// int main(){
//     int arr[]={3, -4, 5, 4, -1, 7, -8};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     int maxsum = INT_MIN;

//     for(int st = 0;st<size; st++){
//         int currsum = 0;
//         for(int end=st; end<size; end++){
//             //for(int i=st; i<=end; i++){
//                 //cout<<arr[i];
//                 currsum+=arr[end];
//                 maxsum = max(currsum, maxsum);
//             //}
//             //cout<<" ";
//         }
//         // cout<<endl;
//     }
//     cout<<"subarray sum = "<<maxsum<<endl;
//     return 0;
// }

int main(){
    int arr[]= {3, -4, 5, 4, -1, 7, -8};
    int currentSum = 0, maxSum = INT_MIN;
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size; i++){
        currentSum+=arr[i];
        maxSum = max(currentSum, maxSum);
        
        if(currentSum<0){
            currentSum = 0;
        }
    }
    cout<<maxSum<<endl;
    return 0;
}