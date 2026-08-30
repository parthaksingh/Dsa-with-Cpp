#include <iostream>
#include <vector>

using namespace std;

//Implement maximum sum from both ends

int findMaxSum(vector<int>& nums, int k){
    
    int n = nums.size(); 
    int rSum = 0, lSum = 0, maxSum = 0;

    for(int i =0; i<k; i++){
        lSum+=nums[i];
    }
    maxSum = lSum;

    int Rindex = n - 1;
    for(int i = k - 1; i>=0; i--){
        lSum-= nums[i];
        rSum+=nums[Rindex];
        Rindex--;
        maxSum = max(maxSum, lSum+ rSum);
    }

    return maxSum;
}

int main(){
    vector<int> v1 = {6,2,3,4,7,1,7,1};
    int key = 4;

    cout<<findMaxSum(v1, key)<<endl;
    return 0;
}