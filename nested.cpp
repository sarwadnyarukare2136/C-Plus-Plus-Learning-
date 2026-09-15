//nested loop 1
//printing stars

#include <iostream>
using namespace std;

int main()
{
    int n,x;

    cout << "Enter number : ";
    cin >> n;

    cout << "Enter star's : ";
    cin >> x;

    for(int i = 1 ; i<=n ; i++){ 
        for(int j = 1 ; j <= x ; j++) {
            cout << "*" ;
        }
        cout << endl;
    }
    return 0;
}