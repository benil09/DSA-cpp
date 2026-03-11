#include <iostream>
using namespace std;

int factorial(int x)
{

    if (x == 0)
        return 1;

    int p = factorial(x - 1);
    int val = x * p;

    return val;
}

int power(int x){
    if (x==0){
        return 1;
    }
    int p = power(x-1);
    int val = 2 * p;

    return val;
}

int counting (int x){
    //base case
    if(x==0) return 0;

    cout << x;
    int p =counting(x-1);
    return p;

}

int main()
{
    int n;
    cout << "enter the value of n : ";
    cin >> n;
    int ans = factorial(n);
    int ans1 = power(n);
    int ans2 = counting(5);
    cout << ans2;

    return 0;
}