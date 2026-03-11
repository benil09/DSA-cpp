#include <iostream>
using namespace std;

bool checkOnesSegment(string str){
        bool flag=false;
        int prev = 0;
        int next = 1;

        while(next < str.size()){
            cout << "prev : "<< str[prev] << " "<< "next : "<< str[next];
            
            if(str[prev] =='1' && str[next] == '1'){
                flag = true;
                return flag;
            }else{
                next++;
                prev++;
            }
            cout<<" res :"<< flag <<endl;
                
        }

        return flag;
}

int main() {
    string str = "1100";
    bool res = checkOnesSegment(str);
    cout << res;





    
    return 0;
}