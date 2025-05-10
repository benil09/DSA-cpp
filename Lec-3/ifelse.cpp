#include<iostream>
using namespace std;

int main(){
 char ch;
 cout<<"enter the character :";
 cin>>ch;

 if(ch>='a' && ch <='z'){
    cout<<"the character is lowercase";
 }else if(ch>='A' && ch<='Z'){
    cout<< "the character is UPPERCASE";
 }else if(ch >= '0' && ch<= '9'){
    cout<< "the character is numeric";
 }else{
    cout<<"the character is neither uppercase nor lowercase and not even the numeric"<<endl;
 }
  


  
}