#include <iostream>
using namespace std;

// int Printhello(){
//     cout<<"Hello world\n";
//     return 5;
// }

// int main(){
//     int val= Printhello();
//     cout<<"val = "<<val<<endl;
//     //cout<<Printhello()<<endl;

//     return 0;

// }

// double sumNumbers(int a, int b){
//     if(a<b){
//         return a;
//     }else{
//         return b;
//     }
   

//     //return a+b;
// }

// int main(){
//     cout<<sumNumbers(10,8)<<endl;

//     return 0;
// }

// int sumNumber(int n){
//     int sum = 0;
//     for(int i=0; i<=n; i++){
//         sum+=i;

//     }
//     return sum;
// }
// int main(){
//     int n, m;
//     cout<<"Enter the n number: ";
//     cin>>n;
//     cout<<"Enter the M number: ";
//     cin>>m;
//     cout<< sumNumber(n)<<endl;
//     cout<< sumNumber(m)<<endl;

//     return 0;
// }

// int facN(int n){
//     int fac = 1;

//     for(int i=1; i<=n; i++){
//         fac*=i;
        
//     }
//     return fac;
// }
// int main(){

//     cout<<facN(5)<<endl;
//     return 0;
// }

//calculate sum of digit of a number

// int sumOf(int num){
//     int sumDi = 0;

//     while(num > 0){
//         int last = num%10;
//         num = num/10;
//         sumDi+=last;
//     }
//     return sumDi;
// }
// int main(){
//     cout<<sumOf(2345);
//     return 0;
// }

// int facNum(int n){
//     int fac=1;
//     for(int i=1; i<=n; i++){
//         fac*=i;

//     }
//     return fac;
// }
// int nCr(int n, int r){
//     int fac_n = facNum(n);
//     int fac_r = facNum(r);
//     int fac_nMr = facNum(n-r);

//     return fac_n / (fac_r * fac_nMr);
// }

// int main(){
//     int n = 8, r = 2;
//     cout<<nCr(n, r);

//     return 0;
// }

