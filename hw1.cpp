//Homework
//Sum of all numbers from 1 to n which are divisible by 3.

#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    
    cout << "Enter number : ";
    cin >> n;

    for(int i = 1 ; i <= n ; i++) {
        if(i % 3 == 0) {
            sum += n;
        } 
    }
    cout << "The sum from 1 to "<< n << " is :" << sum;

}