//Check if a number is prime or not.

#include <iostream>
using namespace std;

int main()
{
    int n ;
    cout << "Enter number :";
    cin >> n;

    for(int i = 2 ; i <= n-1 ; i++){
        if(n % i == 0){
            cout << "Not prime";
            return 0;
        }
    }
    cout << "Prime";
    return 0;

}