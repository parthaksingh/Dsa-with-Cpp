#include <iostream>
#include<set>
using namespace std;

int main(){

    set<string> inviteguest;

    int n;
    cin>>n;

    while(n--){
        string name;
        cin>>name;

        inviteguest.insert(name);
    }
    cout<<"invited guest: ";

    for(auto x: inviteguest){
        cout<<x<<" ";
    }

    return 0;
}