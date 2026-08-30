#include <iostream>
#include <vector>

using namespace std;

//Implement maximum sum from both ends

// int findMaxSum(vector<int>& nums, int k){
    
//     int n = nums.size(); 
//     int rSum = 0, lSum = 0, maxSum = 0;

//     for(int i =0; i<k; i++){
//         lSum+=nums[i];
//     }
//     maxSum = lSum;

//     int Rindex = n - 1;
//     for(int i = k - 1; i>=0; i--){
//         lSum-= nums[i];
//         rSum+=nums[Rindex];
//         Rindex--;
//         maxSum = max(maxSum, lSum+ rSum);
//     }

//     return maxSum;
// }

// int main(){
//     vector<int> v1 = {6,2,3,4,7,1,7,1};
//     int key = 4;

//     cout<<findMaxSum(v1, key)<<endl;
//     return 0;
// }


// Implement maximum sum using sliding window

// int findMaxSum(vector<int>& nums, int k){
//     int n = nums.size();
//     int sum = 0, maxSum = 0;
    
//     for(int i = 0; i<k; i++){
//         sum+=nums[i];
//     }
//     maxSum = sum;

//     for(int i = k; i < n; i++){
//         sum+=nums[i];
//         sum-=nums[i - k];

//         maxSum = max(sum, maxSum);
//     }
//     return maxSum;
// }

// int main(){
//     vector<int> v1 = {6,2,3,4,8,7,4,1,4};
//     int key = 3;

//     cout<<findMaxSum(v1, key);
//     return 0;
// }


//Implement maximum sum using sliding window element position and element;

int findMaxSum(vector<int>& nums, int k){
    int n = nums.size();
    int sum = 0, maxSum = 0, strt;

    for(int i = 0; i<k; i++){
        sum+=nums[i];
    }
    maxSum = sum;

    for(int i = k; i <n; i++){
        sum += nums[i];
        sum-= nums[i - k];
        
        if(sum>=maxSum){
            maxSum = sum;

            strt = i - k +1;

         }
        }
        for(int i = strt; i<strt+k; i++){
                cout<<nums[i]<<" ";
            }
            cout<<endl;
            for(int i= strt; i<strt+k; i++){
                cout<<i+1<<" ";
            }
            cout<<endl;
    
    return maxSum;
}
int main(){
    vector<int> v1 = {6,2,1,4,5,6,4,2,7};
    int key = 3;
    
    cout<<findMaxSum(v1, key);
    return 0;
}