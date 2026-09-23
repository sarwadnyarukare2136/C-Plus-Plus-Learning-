//Calculate the sum of digits of a number .

#include <iostream>
using namespace std;

int SumOfDigits(int n) {

    int sum = 0;

    while(n>0) {
        
        int digit = n % 10;
        sum += digit;
        n = n / 10;
    }
    return sum;
}

int main()
{
    cout << "The sum of digits is :" << SumOfDigits(1234);

    return 0 ;  
}
