#include <iostream>
using namespace std;

int main() {
    char arr[10]="love";
    cout << arr<< " ";
    for (int i=0;arr[i]!= '\0' ;i++){
        cout << arr[i];
    }
    return 0;
}