//Sum of numbers from 1 to n using while loop.

#include <iostream>
using namespace std;

int main()
{
    int n;
    int i = 1;
    int sum = 0;

    cout << "Enter number : ";
    cin >> n;

    while(i <= n) {
        sum += i;
        i++;
    }
    cout << sum;

    return 0;
}