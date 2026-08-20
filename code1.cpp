#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age: ";
    cin>>age;
    if(age>=18){
        cout<<"You are eligiable to vote.";
    }else if(age>=105){
        cout<<"you can't give vote.";

    }
    else{
        cout<<"you are below of 18.";
    }
    cout<<endl;

    return 0;
}