#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> x(n);
    for(int i=0; i<n ;i++){
        cin>>x[i];
    }

    map<int, int> m;

    // for(int i=0; i<n; i++){
    //     m[x[i]]++;
    // }

    for(int y:x){
        m[y]++;
    }
    int sum = 0;

    for(auto l: m){
        if(l.second>1){
            sum+=l.first;
        }
    }
    cout<<"ans: "<<sum;
    return 0;
}