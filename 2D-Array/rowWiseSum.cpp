#include <iostream>
using namespace std;
void rowWiseSum(int arr[][3], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << "The sum of row " << i + 1 << "is " << sum << endl;
    }
}
void maxSumRow(int arr[][3], int m, int n)
{
    int maxSum = -1;
    int temp;

    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum = sum + arr[i][j];
            
        }
        
        if(sum>maxSum){
            maxSum=sum;
            temp = i;
        }
        
     //   cout << "The sum of row " << i + 1 << " is " << sum << endl;
       
    }
    cout<< " The row with max sum is : " << temp+1 << endl;
  
}

void colWiseSum(int arr[][3], int m, int n)
{
    for (int j = 0; j < n; j++)
    {
        int sum = 0;
        for (int i = 0; i < m; i++)
        {
            sum = sum + arr[i][j];
        }
        cout << "The sum of col " << j + 1 << "is " << sum << endl;
    }
}
int main()
{
    int arr[3][3] = {{8,8,8}, {10,15,12}, {7, 8, 9}};

    rowWiseSum(arr, 3, 3);
    cout<<endl;
    colWiseSum(arr, 3, 3);
    cout<<endl;
    maxSumRow(arr,3,3);

    return 0;
}