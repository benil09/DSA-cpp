#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
   char ch[6]="hello";

   cout<<arr<<endl; // address of the array
   cout<<ch<<endl; // value of the character array

   cout<<ch[0]<<endl; // first character of the string

   char *c=&ch[0];
   cout<<c<<endl;

    return 0;
}