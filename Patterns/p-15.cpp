#include <iostream>
using namespace std;

int main() {

    for(int i=1;i<4;i++){
        for(int j=1;j<=4-i;j++){    // printing the space
            cout<< " ";

        }
        for(int num = 1;num <=i;num++){
            cout<<num;
        }
        cout<<endl;
    }
    
    return 0;
}


// print the pattern

//             1
//         1   2
//     1   2   3
// 1   2   3   4
    