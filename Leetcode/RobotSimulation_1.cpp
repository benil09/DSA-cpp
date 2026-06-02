#include <iostream>
using namespace std;

int main() {

   vector<int> cmd ={4,-1,4,-2,4};
   vector<vector<int>> obstacles = {{2,4}}
   set<pair<int,int>>obsSet = obstacles;


   int Xc = 0 ;
   int Yc = 0 ;

   int dir = 0; // 0=N 1=E 2=S 3=W

   for(int i = 0 ; i < cmd.size();i++){
        if(cmd[i] == -1 ){
            dir = (dir + 1) % 4; // turn right
        }else if(cmd[i] == -2){
            dir = (dir + 3) % 4; // turn left
        }else{
             int steps = cmd[i];
             while (steps--) {
                int nextXc= Xc;
                int nextYc= Yc;

                if (dir == 0) Yc++;
                else if (dir == 1) Xc++;
                else if (dir == 2) Yc--;
                else if (dir == 3) Xc--;

                //check obstacles
                if()
            }
        }
   }

    cout << "Final Position: (" << Xc << ", " << Yc << ")" << endl;
    return 0;
}