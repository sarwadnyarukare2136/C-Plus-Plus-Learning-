//Sum of numbers from 1 to n.

#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int n;

    cout << "Enter number : ";
    cin >> n;

    for(int i = 1 ; i <= n ; i++){
        sum = sum + i;

    }
    cout << sum;

    return 0;
}