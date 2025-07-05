#include <iostream>
using namespace std;

int main() {
    char ch = 'B';
    char lowerCase= ch - 'A'+'a';
    cout<<lowerCase<<endl;

    char ch1='b';
    char upperCase= ch1 - 'a'+'A';
    cout<<upperCase<< " " << endl;

    return 0;
}