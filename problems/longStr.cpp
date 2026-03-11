#include <iostream>
using namespace std;
#include <unordered_map>

int main() {
    unordered_map<char,int> freq ;
    string str = "nilkamal";


    for(int i = 0 ; i<str.size();i++){
        freq[str[i]++];
       
    } 
    
    cout << freq.size();
    
    
    return 0;
}