// WAF to calculate the sum of numbers from 1 to n.

#include <iostream>
using namespace std;

int Sum(int n) {

    int sum = 0;

    for(int i=1 ; i<=n ; i++) {
        sum += i;
    }
    return sum;

}

int main()
{
    cout << "Sum is : " << Sum(12);

    return 0 ;  
}
