#include <iostream>
#include<set>
#include<unordered_set>
#include <vector>

using namespace std;

//invite guest list on birthday;
// int main(){

//     set<string> inviteguest;

//     int n;
//     cin>>n;

//     while(n--){
//         string name;
//         cin>>name;

//         inviteguest.insert(name);
//     }
//     cout<<"invited guest: ";

//     for(auto x: inviteguest){
//         cout<<x<<" ";
//     }

//     return 0;
// }

//for add common element of two vectors eg. [1,2,3,2,4], [2, 4, 5,3] ans = 2+4+3 = 9;


// int main(){

//     int n, m;
//     cin>>n>>m;

//     vector<int> v1(n);
//     vector<int> v2(m);

//     cout<<"element of v1: ";
//     for(int i = 0; i< n; i++){
//         cin>>v1[i];
//     }
//     cout<<endl;

//     cout<<"element of v2: ";
//     for(int i= 0; i<m; i++){
//         cin>>v2[i];
//     }
//     cout<<endl;

//     set<int> s1;
//     int ans_sum = 0;

//     for(auto ele:v1){
//         s1.insert(ele);
//     }

//     for(auto ele2: v2){
//         if(s1.find(ele2) != s1.end()){
//             ans_sum += ele2;
//         }
//     }
//     cout<<"ans: "<<ans_sum<<endl;

//     return 0;
// }

// In string all Alphabet present there or not;
// bool checkAllAlphabet(string s){

//     if(s.length()<26){
//         return false;
//     }

//     transform(s.begin(), s.end(), s.begin(), ::tolower);

//     set<char> s1;
//     for(auto ch: s){
//         s1.insert(ch);
//     }
//     return(s1.size() == 26);
// }

// int main(){
//     string k;
//     cin>>k;

//     if(checkAllAlphabet(k) ){
//         cout<<"yes";
//     }else{
//         cout<<"no";
//     }
//     return 0;
// }


//fine the second smallest value from vector;
// int main(){

//     int n;
//     cin>>n;
    
//     vector<int> v1(n);

//     cout<<"vector elements: ";
//     for(int i = 0; i<n ; i++){
//         cin>>v1[i];
//     }
//     cout<<endl;

//     set<int> s1;
//     for(auto x:v1){
//         s1.insert(x);
//     }

//     auto it = s1.begin();
//     //advance(it, 1);  //anyone can you use;
//     it++;
//     cout<<"Second smallest value: "<<*it<<endl;

//     return 0;
// }


// Given the number of questions as n, and marks for the correct answer as p and q marks for the incorrect answer.

// For each question, you can:

// * Attempt it correctly → get p marks
// * Attempt it incorrectly → get q marks
// * Leave it unanswered → get 0 marks

// Find the number of all different possible marks that one can score in the examination.

int main(){
    int n, p, q;
    cin>>n>>p>>q;

    unordered_set<int> s1;
    
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <=n; j++){
            int currect = i;
            int incurrect = j;
            int untuach = n - (i + j);

            if(untuach >= 0){
                int score = currect*p + incurrect*q;
                s1.insert(score);
            }else{
                break;
            }
        }
    }
    for(auto x:s1){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<s1.size()<<endl;
    return 0;
}