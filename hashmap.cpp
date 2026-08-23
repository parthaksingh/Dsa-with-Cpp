#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     vector<int> x(n);
//     for(int i=0; i<n ;i++){
//         cin>>x[i];
//     }

//     map<int, int> m;

//     // for(int i=0; i<n; i++){
//     //     m[x[i]]++;
//     // }

//     for(int y:x){
//         m[y]++;
//     }
//     int sum = 0;

//     for(auto l: m){
//         if(l.second>1){
//             sum+=l.first;
//         }
//     }
//     cout<<"ans: "<<sum;
//     return 0;
// }

bool canMakeequal(vector<string> &v){
    unordered_map<char, int>mp;

    for(auto str: v){
        for(char k:str){
            mp[k]++;
        }
    }
    int n = v.size();
    for(auto p : mp){
        if(p.second%n != 0){
            return false;
        }
    }
    return true;
}

int main(){

    int n;
    cin >> n;

    vector<string> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    cout << (canMakeequal(v) ? "Yes" : "No") << endl;

    return 0;
}
//output 
// 3
// collegeee
// coll
// collegge
//output: yes