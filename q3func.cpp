// WAF to calculate the factorial of 
#include <iostream>
using namespace std;

int Factorial(int n) {

    int facto = 1;

    for(int i=1 ; i<=n ; i++) {
        facto *= i;
    }
    return facto;

}

int main()
{
    cout << "Factorail is : " << Factorial(5);

    return 0 ;  
}
