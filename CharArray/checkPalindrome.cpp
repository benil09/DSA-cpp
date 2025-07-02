#include <iostream>
using namespace std;
bool checkPalindrome(char name[],int len){
    int s=0;
    int e=len-1;

    while(s<=e){
        if(name[s]!=name[e]){
            return 0;
        }else{
            s++;
            e--;
        }
    }
    return 1;
}
int main()
{
    char name[20];
    cout << "Enter your name : ";
    cin >> name;
    int len=0;
    for(int i=0;name[i]!='\0';i++){
        len++;
    }
    cout<<"Length : "<<len<<endl;
   bool ans=  checkPalindrome(name,len);
   cout<<"Palindrome or Not : "<< ans;
    return 0;
}