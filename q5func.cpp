// WAF program to calculate binomial coefficient of 'n' and 'r' .

#include <iostream>
using namespace std;

int Factorial(int num) {

    int facto = 1;

    for(int i=1 ; i<=num ; i++) {
        facto *= i;
    }
    return facto;
}
int BinomialCoefficient(int n, int r) {

    int numerator = Factorial(n);
    int denominator = Factorial(r);
    int denominator2 = Factorial(n-r);

    int ans = numerator / (denominator * denominator2);

    return ans;

}

int main()
{
    int n = 10;
    int r = 5;

    cout << "The binomial coeff. of " << n << " and " << r << " is : " << BinomialCoefficient(n,r); 
    return 0 ;  
}
