//Sum of all odd numbers formm 1 to n .

#include <iostream>
using namespace std;

int main()
{
    int n ;
    int sum = 0 ;
    int i = 1;

    cout << "Enter number : ";
    cin >> n;

    while(i <= n){
        if(i % 2 != 0){
            sum += i;
        }
        i++;
    }
    cout << sum;

    return 0;

}