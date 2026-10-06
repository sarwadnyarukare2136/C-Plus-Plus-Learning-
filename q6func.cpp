// WAF to check if a number is prime or not .

#include <iostream>
using namespace std;

void PrimeOrNot(int n) {
    if (n <= 1) {
        cout << "Not Prime .";
        return;
    }

    bool isPrime = true;

    for(int i = 2 ; i < n ; i++ ) {
        if(n % i == 0) {
            isPrime = false;
            break;
        }
    }
    
    if(isPrime) {
        cout << "Prime .";
    } else {
        cout << "Not Prime .";
    }
}

int main()
{
    PrimeOrNot(7);
    return 0 ;  
}
