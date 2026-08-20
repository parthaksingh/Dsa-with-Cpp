#include <iostream>
using namespace std;

// int main(){
//     int n,i = 1;
//     cout<<"enter the num: ";
//     cin>>n;
    
//     while(i<=10){
//         cout<<n<<"*"<<i<< "="<<n*i<<endl;;
//         i++;
//     }
//     cout<<endl;
//     return 0;
// }
int main(){
    int n;
    cout<<"enter the num =";
    cin>>n;
    int sum = 0;

    for(int i=0; i<=n; i++){
        //cout<<i<<"+";
        sum+=i;
    }
    cout<<"="<<sum<<endl;
    return 0;
}
