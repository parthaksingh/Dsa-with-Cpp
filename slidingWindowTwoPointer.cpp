#include <iostream>
#include <vector>

using namespace std;


// Implement longest subarray with sum constraint
// int findMaxLen(vector<int>& nums, int k){
    
//     int n = nums.size();
//     int l = 0, r = 0, sum = 0, Maxlen = 0;

//     while(r<n){
//         sum += nums[r];

//         if(sum>k){
//             sum-=nums[l];
//             l++;
//         }
//         Maxlen = max(Maxlen, r-l+1);

//         r++;
//     }
//     return Maxlen;
// }

// int main(){
//     vector<int> v1 = {2,5,1,7,10};
//     int key = 14;

//     cout<<findMaxLen(v1, key)<<endl;
//     return 0;
// }


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

// int findMaxSum(vector<int>& nums, int k){
//     int n = nums.size();
//     int sum = 0, maxSum = 0, strt;

//     for(int i = 0; i<k; i++){
//         sum+=nums[i];
//     }
//     maxSum = sum;

//     for(int i = k; i <n; i++){
//         sum += nums[i];
//         sum-= nums[i - k];
        
//         if(sum>=maxSum){
//             maxSum = sum;

//             strt = i - k +1;

//          }
//         }
//         for(int i = strt; i<strt+k; i++){
//                 cout<<nums[i]<<" ";
//             }
//             cout<<endl;
//             for(int i= strt; i<strt+k; i++){
//                 cout<<i+1<<" ";
//             }
//             cout<<endl;
    
//     return maxSum;
// }
// int main(){
//     vector<int> v1 = {6,2,1,4,5,6,4,2,7};
//     int key = 3;
    
//     cout<<findMaxSum(v1, key);
//     return 0;
// }

// int findMaxSubarray(vector<int>& nums, int k, int m){
//     int n = nums.size();
//     int l = 0, r = 0, count = 0, sum = 0;
//     int target = k * m;

//     while(r<n){
//         sum += nums[r];

//         if(r - l + 1 == k){
//             if(sum >= target){
//                 count++;
//             }
//             sum -= nums[l];
//             l++;
//         }
//         r++;
//     }
//     return count;
// }

// int main(){
//     vector<int> v1 = {2,2,2,5,6,4,4,6};
//     int key = 3;
//     int m = 4;
//     cout<<findMaxSubarray(v1, key, m)<<endl;
//     return 0;
// }


int fun(string s){
    int n = s.size();
    int maxLen = 0;

    for(int i = 0; i<n; i++){
        int hash[256] = {0};

        for(int j = i; j < n ; j ++){
            if(hash[s[j]] == 1){
                break;
            }
            int len = j - i + 1;
            maxLen = max(maxLen, len);

            hash[s[j]] = 1;
        }
    }
        return maxLen;
}

int main(){
    string s = "cadbzabcd";
    //cin >> s;

    cout<<fun(s)<<endl;
    return 0;
}

