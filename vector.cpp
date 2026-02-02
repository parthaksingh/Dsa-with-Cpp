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

int main(){
    vector<int>vec={1, 2, 4, 6};
    int target = 3;
    vector<int>ans;
    int size = vec.size();

    for(int i = 0; i<size; i++){
        for(int j = i+1; j<size; j++){
            if(vec[i]+vec[j]== target){
                ans.push_back(i);
                ans.push_back(j);

                

            }
        }
    }
    
        cout << ans[0] << ", " << ans[1] << endl;
    
        return 0;
    }

