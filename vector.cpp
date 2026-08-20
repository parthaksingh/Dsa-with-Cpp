#include <iostream>
#include <vector>
using namespace std;

//size, push, pop, front, back, at...
// int main(){
//     vector<int>vec;
    

//     cout<<"size  = "<<vec.size()<<endl;
//     vec.push_back(23);
//     vec.push_back(34);
//     vec.push_back(35);
//     vec.pop_back();
//     cout<<"size  = "<<vec.size()<<endl;
//     for(int val: vec){
//         cout<<val<<" ";
//     }

//     cout<<endl;
//     cout<<vec.front()<<endl;
//     cout<<vec.back()<<endl;
//     cout<<vec.at(0)<<endl;

//     return 0;
// }

// int main(){
//     vector<int>vec={1, 2, 4, 6};
//     int target = 8;
//     vector<int>ans;
//     int size = vec.size();

//     for(int i = 0; i<size; i++){
//         for(int j = i+1; j<size; j++){
//             if(vec[i]+vec[j]== target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//             }
//         }
//     }
    
//         cout << ans[0] << ", " << ans[1] << endl;
    
//         return 0;
//     }


// vector<int> pairsum(vector<int> nums, int target){
//     int size = nums.size();
//     int i = 0, j = size-1;
//     vector<int> ans;
//     while(i<j){
//         int ps = nums[i] + nums[j];
//         if(ps>target){
//             j--;
//         }else if(ps<target){
//             i++;
//         }else{
//             ans.push_back(i);
//             ans.push_back(j);

//             return ans;
//         }
//     }
//     return ans;
// }
// int main(){
//     vector<int>nums={1, 3, 4, 6};
//     int target = 9;
//     vector<int>ans= pairsum(nums, target);
//     cout<<ans[0]<<", "<<ans[1]<<endl;
//     return 0;
// }


int majorityElement(vector<int>nums){
    int n = nums.size();

    for(int val: nums){
        int freq = 0;
        for(int el: nums){
            if(el==val){
                freq++;
            }
        }
        if(freq>n/2){
            return val;
        }
    }
    return -1;
}

int main(){

    vector<int>ver = {1,1,2,1,2};
    int ans = majorityElement(ver);
    cout<<ans<<endl;
    return 0;
}