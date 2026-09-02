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


//Implement maximum sum from both start and ends

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
//     int sum = 0, maxSum = 0, start = 0;

//     for(int i = 0; i<k; i++){
//         sum+=nums[i];
//     }
//     maxSum = sum;

//     for(int i = k; i <n; i++){
//         sum += nums[i];
//         sum-= nums[i - k];
        
//         if(sum>=maxSum){
//             maxSum = sum;

//             start = i - k +1;

//          }
//         }
//         for(int i = start; i<start+k; i++){
//                 cout<<nums[i]<<" ";
//             }
//             cout<<endl;
//             for(int i= start; i<start+k; i++){
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


//Add brute force longest substring solution
// int fun(string s){
//     int n = s.size();
//     int maxLen = 0;

//     for(int i = 0; i<n; i++){
//         int hash[256] = {0};

//         for(int j = i; j < n ; j ++){
//             if(hash[s[j]] == 1){
//                 break;
//             }
//             int len = j - i + 1;
//             maxLen = max(maxLen, len);

//             hash[s[j]] = 1;
//         }
//     }
//         return maxLen;
// }

// int main(){
//     string s = "cadbzabcd";
//     //cin >> s;

//     cout<<fun(s)<<endl;
//     return 0;
// }


//optimal Solution;

// int fun(string s){
//     int n = s.size();
//     int l = 0, r = 0, maxlen = 0;
//     int hash[256];
//     fill(hash, hash+256, -1);
//     while(r<n){
//         if(hash[s[r]] != -1){
//             if(hash[s[r]] >= l){
//                 l = hash[s[r]] + 1;
//             }
//         }
//         int len = r - l + 1;
//         maxlen = max(maxlen, len);

//         hash[s[r]] = r;
//         r++;
//     }
//     return maxlen;
// }


// int main(){
//     string s = "cadbzeabcd";
//     cout<<"MaxLen = "<<fun(s)<<endl;
//     return 0;
// }


//Add brute-force longest subarray with at most k zeros Max Consecutive Ones III ;

// int fun(vector<int>& nums, int k){
//     int maxlen = 0;
    
//     for(int i = 0; i < nums.size(); i++){
//         int count = 0;
//         for(int j = i; j < nums.size(); j++){
//             if(nums[j] == 0){
//                 count++;
//             }
//             if(count <= k){
//                 int len = j - i + 1;
//                 maxlen = max(maxlen, len);

//             }else{
//                 break;
//             }
//         }
//     }
//     return maxlen;
// }

//Add optimal solution longest subarray with at most k zeros Max Consecutive Ones III ;

// int fun(vector<int>& nums, int k){
//     int l = 0, r = 0, maxlen = 0, zeros = 0;
    
//     while(r < nums.size()){
//         if(nums[r] == 0){
//             zeros++;
//         }
        
//             if(zeros > k){
//                 if(nums[l] == 0){
//                 zeros--;
//                 }
//                 l++;
//             }
//             int len = r - l + 1;
//             maxlen = max(maxlen, len);
//         r++;
//     }
//     return maxlen;
// }

// int main(){
//     vector<int> v1 = {1,1,1,0,0,0,1,1,1,1,1,0};
//     int key = 2;
//     cout<<fun(v1, key)<<endl;
//     return 0;
// }

