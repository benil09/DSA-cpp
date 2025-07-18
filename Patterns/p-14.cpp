#include <iostream>
using namespace std;

int main()
{

    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        for (int space = 1; space <= n - i; space++)
        {
            cout << " ";
        }
        for (int num = 1; num <= i; num++)
        {
            cout << num;
        }
        for (int rn = i-1; rn>=1; rn--)
        {
          cout<<rn;
            
        }
        cout << endl;
    }

    return 0;
}

// print the pattern

//             1
//         1   2   1
//     1   2   3   2   1
// 1   2   3   4   3   2   1
