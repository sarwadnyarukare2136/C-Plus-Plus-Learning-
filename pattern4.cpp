//Same as pattern 3 but with characters.

// A B C
// D E F
// G H I

// print this 

#include <iostream>
using namespace std;

int main()
{
    int n;
    char ch = 'A';

    cout << "Enter no. : ";
    cin >> n;

    for(int i = 0 ; i<n ; i++) {
        for(int j = 0 ; j<n ; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl ;
    }
    return 0 ;  
}