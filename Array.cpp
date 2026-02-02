#include <iostream>
using namespace std;

// int main(){

//     int marks[5]={56, 23, 76 ,27 ,98};
//     double  price[] = {99.3, 12.6, 87.4, 74.3};
//     int size = 5;
//     for(int i = 0; i<size; i++){
//         cout<<marks[i]<<endl;
//     }
//     return 0;
// }

// int main(){
//     int size = 5;
//     int arr[size];

//     for(int i=0; i<size; i++){
//         cin>>arr[i];
//     }

//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<endl;
//     }

//     return 0;
// }

// find smallest / largest num in array

// int main(){
//     int nums[]={5, 2, 4, 3, 1, 6};
//     int size = 6;
//     int smallest = INT_MAX;
//     for(int i=0; i<size; i++){
//         if(nums[i]<smallest){
//             smallest = nums[i];
//         }
//     }
//     cout<<smallest<<endl;
//     return 0;
// }

// int main(){
//     int num[]= {5, 2, 4, 3, 1, 6};
//     int size = 6;
//     int largest = INT_MIN;

//     for(int i=0; i<size; i++){
//         if(num[i]>largest){
//             largest = num[i];
//         }
//     }
//     cout<<largest<<endl;
//     return 0;
// }

// int main(){
//     int nums[6]={44, 65, 23, 45, 34, 21};
//     int smallest = INT_MAX;
//     int largest = INT_MIN;
//     for(int i=0; i<6; i++){
//         smallest = min(nums[i], smallest);
//         largest = max(nums[i], largest);
//     }
//     // cout<<nums[smallest]<<endl;
//     // cout<<nums[largest]<<endl;
//     for (int i = 0; i < 6; i++) {
//         if (nums[i] == smallest)
//             cout << "Smallest index: " << i << endl;
//         if (nums[i] == largest)
//             cout << "Largest index: " << i << endl;
//     }


//     return 0;
// }

// linear search
// int main(){
//     int arr[]={2, 4, 6, 3, 8, 9};
//     int target = 81;
//     int index = -1;

//     for(int i=0; i < sizeof(arr)/sizeof(arr[0]); i++){
//         if(arr[i] == target){
//             index = i;
//         }
//     }
//     cout<<index<<endl;
//     return 0;
// }

//same but using function.

// int lisearch(int arr[],int size, int target){

//     for(int i = 0; i<size; i++){
//         if(arr[i]==target){
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){
//     int arr[]={4, 6, 3, 7, 8, 3};
//     int target = 8;
//     int size = sizeof(arr)/sizeof(arr[0]);
//     cout<<lisearch(arr,size ,target)<<endl;
//     return 0;
// }


//pass of reference

// void changeArr(int arr[], int size){
//     cout<<"after function arr\n";
//     for(int i=0; i<3; i++){
//         arr[i]=2*arr[i];
//     }
// }

// int main(){
//     int arr[]={1, 2, 3};
//     changeArr(arr, 3);

// cout<<"main arr\n";
// for(int i=0; i<3; i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
//     return 0;
// }

//again Linear search
// int linearsearch(int arr[], int size, int target){
//     for(int i=0; i<size; i++){
//         if(arr[i]==target){
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){
//     int arr[]={4, 2, 7, 8, 1, 2, 5};
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     int target = 81;
//     cout<<linearsearch(arr, sz, target)<<endl;
//     return 0;
// }

//another method;
// int main(){
//     int arr[]={4, 2, 7, 8, 1, 2, 5};
//     int index = -1;
//     int target = 1;
//     for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
//         if(arr[i]==target){
//             index=i;
//         }
//     }
//     cout<<index<<endl;
//     return 0;

// }

//Reverse an Array

// int main(){
//     int arr[] = {4, 2, 7, 8, 1, 2, 5};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int str = 0, end=size-1;

//     while(str<end){
//         swap(arr[str], arr[end]);
//         str++, end--;
//     }
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void reverseArray(int arr[], int size){
//     int str=0, end=size-1;
//     while(str<end){
//         swap(arr[str], arr[end]);
//         str++, end--;
//     }
// }

// int main(){
//     int arr[]={4, 2, 7, 8, 1, 2, 5};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     reverseArray(arr, size);
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

//add/product of array element
// int addarr(int arr[], int size){
//     int add = 0;
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//         add+=arr[i];
//     }
//     cout<<endl;
//     return add;
// }
// int main(){
//     int arr[]={1, 3, 5, 3, 6};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     cout<<addarr(arr, size)<<endl;

//     return 0;
// }



//user defind array
// int multiarr(int arr[], int size){
//     int product = 1;
//     for(int i=0; i<size; i++){
//         //cout<<arr[i]<<" ";
//         product*=arr[i];
//     }

//     return product;
// }

// int main(){
//     int n;
//     cout<<"Enter the n of arr: ";
//     cin>>n;
//     //cout<<"Enter the n of arr: ";
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     cout<<multiarr(arr, n)<<endl;
//     return 0;
// }