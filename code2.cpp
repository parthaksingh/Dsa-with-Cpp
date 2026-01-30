#include <iostream>
using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     int count = 1;
//     while(count <= n){
//         cout << count<<endl;
//         count += 1;

//     }
//     return 0;
//}

//for loop

// int main(){

//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     int munt = 1;

//     for(int i = 1; i <= 10 ; i++){
//         munt = n * i ;
//         cout << munt<<"\n";
//     }
//     //cout<<sum;
//     return 0;
// }

int main(){
    int n;
    cout << " enter the number: ";
    cin >> n;
    int oddSum = 0;
    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            cout << i << endl;
            oddSum+=i;
        }
    }
    cout << "oddSum = " << oddSum;
    return 0;
}