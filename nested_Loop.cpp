#include <iostream>
using namespace std;

// int main(){
//     int n = 4;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n; j++){
//             cout << "*" <<" ";
//         }
//         cout << endl;
//     }
//  return 0;
// }

// int main(){
//     int n = 4;
//     int m = 5;

//     for(int i = 0; i < n; i++){
//         char ch = 'A';
//         for(int j=0; j<m; j++){
//             cout << ch <<" ";
//             ch+=1;

//         }
//         cout << endl;
//     }
//     return 0;
// }

// int main(){
//     int n = 4;
//     int m = 3;
//     int num = 1;
//     for(int i=0; i<n; i++){
        
//         for(int j=0; j<m; j++){
//             cout << num <<" ";
//             num++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// int main(){
//     int n = 3;
//     char ch = 'A';
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout << ch <<" ";
//             ch+=1;
//         }
//         cout << endl;
//     }
//     cout << "after pattern = "<<ch<<endl;
//     return 0;
//}

//triangle pattern

// int main(){
//     int n;
//     cout <<"enter the num: ";
//     cin >> n;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// int main(){
//     int n;
    
//     cout << "enter the num: ";
//     cin >> n;
    
//     for(int i=0; i<n; i++){ 
        
//         for(int j=0; j<i+1; j++){
//             cout << (i+1);
            
          
           
//         }
//         cout << endl;
//     }
//     return 0;
// }

// int main(){
//     int n=4;
//     for(int i=0; i<n; i++){
//         char ch = 'A' + i;
//         for(int j=0; j<i+1; j++){
//             cout << ch;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//Reverse Triangle Pattern

// int main(){
//     int n = 5;

//     for(int i=0; i<n; i++){
//         for(int j=i+1; j>0; j--){
//             cout << j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//  int main(){
//     int n = 5;
//     int num = 1;

//     for(int i=0; i<n; i++){
//         for(int j=i+1; j>0; j++){ //backwards => i+1
//             cout << num;
//             num++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// int main(){
//     int n = 5;
//     char ch = 'A';

//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){ 
//             cout << ch;
//             ch++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// int main(){
//     int n = 4;
//     char ch = 'A';
//     for(int i=0; i<n; i++){
//         //char ch = 'A' + i;
//         for(int j=i+1; j>0; j--){
//             cout << ch<<" ";
//             ch++;
//             //ch--;
            
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// inverted Triangle Pattern

// int main(){
//     int n = 4;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//             cout <<" ";
//         }
//         for(int j=0; j<n-i; j++){
//             cout << (i+1);
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// int main(){
//     int n = 4;

//     for(int i=0; i<n; i++){
//         char ch = 'A' +i;
//         for(int j=0; j<i; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<n-i; j++){
//             cout<<ch;
//             //ch++;

//         }
//         cout <<endl;
//     }
//     return 0;
// }

//Pyramid Pattern

// int main(){
//     int n=4;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";
//         }
//         for(int j=1; j<=i+1; j++){
//             cout<<j;
//         }
//         for(int j=i; j>0; j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// int main(){
//     int n = 4;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";
//         }
//         for(int j=1; j<=i+1; j++){
//             cout<<j;
//         }
//         for(int j=i; j>=1; j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//hollow diagram pattern

int main(){
    int n=4;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<"*";
        if(i != 0){
            for(int j=0; j<2*i-1; j++){
            cout<<" ";
        }
        cout<<"*";
        }
        
        }
        cout<<endl;
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<i+1; j++){
            cout<<" ";
        }
        cout<< "*";

        if(i != n-2){
            for(int j=0; j<2*(n-i)-5; j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}