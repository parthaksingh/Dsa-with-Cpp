#include <iostream>
using namespace std;

// int facNum(int n){
//     if(n == 0){
//         return 1;
//     }

//     return n* facNum(n-1);
// }

// int main(){

//     cout<<"number of "<<facNum(4)<<endl;
//     return 0;
// }

//fibonacci

int fibNum(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return fibNum(n-1) + fibNum(n-2);
}

int main(){

    cout<<fibNum(8)<<" ";
    return 0;
}