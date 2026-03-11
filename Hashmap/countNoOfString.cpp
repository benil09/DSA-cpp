#include <iostream>
using namespace std;

int main() {
    string str = "aabcccdeffg";
    int arr[26];
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << n;
    cout << str[2]-'a' << endl;
    for(int i = 0 ; i < n ; i++){
        char ch = str[i];
        arr[ch - 'a']++;
    }






    return 0;
}