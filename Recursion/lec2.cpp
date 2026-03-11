#include <iostream>
using namespace std;


void reachHome(int src , int dest){

    cout << "src : "<<src << " " <<"dest :" << dest <<endl;
    //base case
    if(src == dest){
        cout << "ghar phoch gya bhai ";
        return ;
    }

    // processing 
    src ++ ;

    reachHome(src,dest);
}
int main() {
    int dest =10;
    int src=0;

    reachHome(src,dest);
    return 0;
}