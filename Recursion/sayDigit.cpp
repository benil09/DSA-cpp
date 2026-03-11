#include <iostream>
using namespace std;

void sayWord(int n, string arr[])
{

    // base case
    if (n == 0)
    {
        return;
    }

    // processing
    int digit = n % 10;
    n = n / 10;

    sayWord(n, arr);

    cout << arr[digit] << " " ;
}

int main()
{
    int n ;
    cout << "Enter the random number to be pronounced : " ;
    cin >> n ;
    string num[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    sayWord(n, num);
    return 0;
}